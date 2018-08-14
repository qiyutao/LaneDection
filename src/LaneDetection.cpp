//
// Created by adam on 18-7-17.
//
#include "LaneDetection.h"

LaneDetection::LaneDetection(string intrinsicFileName) :
		blockNum(9), windowSize(80), recordCounter(0), initRecordCount(0), failDetectFlag(
				true) {
	histogram.resize(640); //192
	midPoint = 640 >> 1; //192
	midHeight = 360 * 0.55;
	stepY = HEIGHT / blockNum;
	mIntrinsicFileName = intrinsicFileName;

	Eigen::Vector3d initV;
	initV << 0, 0, 0;

	vsdkUndistorted = vsdk::UMat(720, 1280, VSDK_CV_8UC1);
	imageAfterWarp = vsdk::UMat(720, 1280, VSDK_CV_8UC1);

	vsdkWarpOriImage = vsdk::UMat(720, 1280, VSDK_CV_8UC3);
	vsdkOriImage = vsdk::UMat(720, 1280, VSDK_CV_8UC3);
	vsdkWrapImageGray = vsdk::UMat(720, 1280, VSDK_CV_8UC1);
	vsdkMergeImage = vsdk::UMat(360, 640, CV_8UC1);
	imageChannelR = vsdk::UMat(720, 1280, CV_8UC1);
	imageChannelG = vsdk::UMat(720, 1280, CV_8UC1);
	imageChannelB = vsdk::UMat(720, 1280, CV_8UC1);
	vsdkWarpEdgeImage = vsdk::UMat(360, 640, CV_8UC1);
	vsdkWarpEdgeImageAfterRange = vsdk::UMat(360, 640, CV_8UC1);
	vsdkRedBinary = vsdk::UMat(360, 640, CV_8UC1);
	vsdkMergeImageRGB = vsdk::UMat(360, 640, CV_8UC3);
	outResize = vsdk::UMat(360, 640, VSDK_CV_8UC1);
	vsdkMergeImage1 = vsdk::UMat(360, 640, VSDK_CV_8UC1);

	resize.Initialize(vsdkWrapImageGray, outResize);
	colorcv2grey_op.Initialize(vsdkWarpOriImage, colorcv2rgb_op.eBGR888_TO_GREY,
			vsdkWrapImageGray);
	canny_op.Initialize(outResize, vsdkWarpEdgeImage, 640, 360, 50, 150, 3);
	range_op.Initialize(vsdkWarpEdgeImage, 1, 255, vsdkWarpEdgeImage);
	split_op.Initialize(vsdkWarpOriImage, imageChannelB, imageChannelG,
			imageChannelR);
	range_op2.Initialize(imageChannelR, 185, 255, vsdkRedBinary);
	add_op.Initialize(vsdkWarpEdgeImage, vsdkRedBinary, vsdkMergeImage);

	calibrationInit();
	warpInit();

	for (int i = 0; i < 5; i++) {
		curveCoefRecordL[i] = initV;
	}
}

LaneDetection::~LaneDetection() = default; //The core of lane detection algorithm.

void LaneDetection::process() {

	colorcv2grey_op.ReconnectIO(vsdkOriImage, vsdkWrapImageGray);
	colorcv2grey_op.Process();

	undistort_Remap.Process(vsdkWrapImageGray, vsdkUndistorted);

	warpRemap.Process(vsdkUndistorted, imageAfterWarp);

	resize.ReconnectIO(imageAfterWarp, outResize);
	resize.Process(imageAfterWarp, outResize);

	canny_op.ReconnectIO(outResize, vsdkWarpEdgeImage, 640, 360);
	canny_op.Process();
//cout<<"point 3"<<endl;
//cv::imwrite("im5.png", (cv::UMat)vsdkWarpEdgeImage);

	range_op.ReconnectIO(vsdkWarpEdgeImage, vsdkWarpEdgeImageAfterRange);
	range_op.Process();

	range_op2.ReconnectIO(outResize, vsdkRedBinary);
	range_op2.Process();

	add_op.ReconnectIO(vsdkWarpEdgeImageAfterRange, vsdkRedBinary,
			vsdkMergeImage1);
	add_op.Process();

	calHist();

	boundaryDetection();

	laneSearch(leftLanePos, laneL, laneLcount, curvePointsL, 'L');

	laneSearch(rightLanePos, laneR, laneRcount, curvePointsR, 'R');

	laneCoefEstimate();

	laneFitting();
}

void LaneDetection::calHist() { // 7.7ms
	histogram.clear();
	vsdk::UMat ROI(vsdkMergeImage1,
			vsdk::Rect(0, HEIGHT - midHeight - 1, WIDTH, midHeight));
	vsdk::Mat tempROI = ROI.getMat(OAL_USAGE_CACHED | vsdk::ACCESS_RW);

	cv::Mat divide_mat;
	cv::divide(255, (cv::Mat) tempROI, divide_mat);
	cv::Mat reduce_mat;
	cv::reduce(divide_mat, reduce_mat, 0, CV_REDUCE_SUM, CV_32S);
	for (int i = 0; i < 640; i++) {
		histogram.push_back((int) reduce_mat.at<int>(0, i));
	}

}

void LaneDetection::boundaryDetection() {
	mergeImageRGB = (cv::UMat) vsdkMergeImage1;

	vector<int>::iterator maxLPtr;
	maxLPtr = max_element(histogram.begin(), histogram.begin() + midPoint - 1);
	leftLanePos = distance(histogram.begin(), maxLPtr);

	//find the right lane boudary position
	vector<int>::iterator maxRPtr;
	maxRPtr = max_element(histogram.begin() + midPoint, histogram.end());
	rightLanePos = distance(histogram.begin(), maxRPtr);
	cout << leftLanePos << " " << rightLanePos << endl;
	//draw the lane boundary on iamge

}

void LaneDetection::laneSearch(const int &lanePos, vector<cv::Point2f> &_line,
		int &lanecount, vector<cv::Point2f> &curvePoints, char dir) {
	_line.clear();    //Lane search.

	vsdk::Mat tempMergeImage = vsdkMergeImage1.getMat(
			OAL_USAGE_CACHED | vsdk::ACCESS_RW);
	mergeImage = (cv::Mat) tempMergeImage;
	const int skipStep = 4;
	int nextPosX = lanePos;
	int xLU = 0, yLU = 0; // left up point
	int xRB = 0, yRB = 0; // right bottom point
	int sumX = 0;
	int xcounter = 0;
	lanecount = 0;

	if ((initRecordCount < 5) || failDetectFlag) //Conduct full search.
			{
		for (int i = 0; i < blockNum; i++) {
			xLU = nextPosX - (windowSize >> 1);
			yLU = stepY * (blockNum - i - 1);
			xRB = xLU + windowSize;
			yRB = yLU + stepY - 1;

			if ((xLU < 0)) {
				xLU = 0;
				xRB = xLU + windowSize;
			}
			if (xRB > (mergeImage.size().width - 1)) {
				xRB = (mergeImage.size().width - 1);
				xLU += ((mergeImage.size().width - 1) - xRB);
			}
			if (xRB - xLU > 0 && xRB >= 0 && xLU >= 0) {
				sumX = 0;
				xcounter = 0;
				uchar *matPtr;
				for (int j = yLU; j <= yRB; j += skipStep) {
					matPtr = mergeImage.data + (j * mergeImage.size().width);
					for (int k = xLU; k <= xRB; k += skipStep) {
						if (*(matPtr + k) == 255) {
							sumX += k;
							xcounter++;
						}
					}
				}
				if (xcounter != 0)
					sumX /= xcounter;
				else
					sumX = nextPosX;

				nextPosX = sumX;
				xLU = ((nextPosX - (windowSize >> 1)) > 0) ?
						(nextPosX - (windowSize >> 1)) : 0;
				xRB = ((xLU + windowSize) < (mergeImage.size().width)) ?
						(xLU + windowSize) : (mergeImage.size().width - 1);
				if (xRB - xLU > 0 && xRB >= 0 && xLU >= 0) {
					for (int j = yLU; j <= yRB; j += skipStep) {
						matPtr = mergeImage.data
								+ (j * mergeImage.size().width);
						for (int k = xLU; k <= xRB; k += skipStep) {
							if (*(matPtr + k) == 255) {
								lanecount++;
								_line.push_back(cv::Point2f(k, j));
							}
						}
					}
				}
			}
		}
	} else
	{
		uchar *matPtr;
		int xtemp;
		for (int i = 0; i < mergeImage.size().height; i++) {
			matPtr = mergeImage.data + (i * mergeImage.size().width);
			for (int j = -50; j <= 50; j += 3) {
				xtemp = (curvePoints[i].x + j);
				if (xtemp >= 0 && xtemp < mergeImage.size().width) {
					if (*(matPtr + xtemp) == 255) {
						lanecount++;
						_line.push_back(cv::Point2f(xtemp, i));
						if (i >= (mergeImage.size().height / 2)) {
							sumX += xtemp;
							xcounter++;
						}
					}
				}
			}
		}
	}
}

bool LaneDetection::laneCoefEstimate() {

	int countThreshold = 50;
	if ((laneLcount > countThreshold) && (laneRcount > countThreshold)) {
		Eigen::VectorXd xValueL(laneLcount);
		Eigen::VectorXd xValueR(laneRcount);
		Eigen::MatrixXd leftMatrix(laneLcount, 3);
		Eigen::MatrixXd rightMatrix(laneRcount, 3);

		for (int i = 0; i < laneLcount; i++) {
			xValueL(i) = laneL[i].x;
			leftMatrix(i, 0) = pow(laneL[i].y, 2);
			leftMatrix(i, 1) = laneL[i].y;
			leftMatrix(i, 2) = 1;
		}

		for (int i = 0; i < laneRcount; i++) {
			xValueR(i) = laneR[i].x;
			rightMatrix(i, 0) = pow(laneR[i].y, 2);
			rightMatrix(i, 1) = laneR[i].y;
			rightMatrix(i, 2) = 1;
		}
		curveCoefL = (leftMatrix.transpose() * leftMatrix).ldlt().solve(
				leftMatrix.transpose() * xValueL);
		curveCoefR = (rightMatrix.transpose() * rightMatrix).ldlt().solve(
				rightMatrix.transpose() * xValueR);

		curveCoefRecordL[recordCounter] = curveCoefL;
		curveCoefRecordR[recordCounter] = curveCoefR;
		recordCounter = (recordCounter + 1) % 5;
		if (initRecordCount < 5)
			initRecordCount++;
		failDetectFlag = false;
		return true;
	} else {
		cerr << "[Lane Detection Algo] There is no enough detected road marks.";

		failDetectFlag = true;
		return false;
	}
}

void LaneDetection::laneFitting() {
	maskImage.create(HEIGHT, WIDTH, CV_8UC3);
	maskImage = cv::Scalar(0, 0, 0);
	curvePointsL.clear();
	curvePointsR.clear();
	if (initRecordCount == 5) {
		curveCoefL = (curveCoefRecordL[0] + curveCoefRecordL[1]
				+ curveCoefRecordL[2] + curveCoefRecordL[3]
				+ curveCoefRecordL[4]) / 5;
		curveCoefR = (curveCoefRecordR[0] + curveCoefRecordR[1]
				+ curveCoefRecordR[2] + curveCoefRecordR[3]
				+ curveCoefRecordR[4]) / 5;
	}
	int xL, xR;
	for (int i = 0; i < mergeImage.size().height; i++) {
		xL = pow(i, 2) * curveCoefL(0) + i * curveCoefL(1) + curveCoefL(2);
		xR = pow(i, 2) * curveCoefR(0) + i * curveCoefR(1) + curveCoefR(2);
		if (xL < 0)
			xL = 0;
		if (xL >= WIDTH)
			xL = WIDTH - 1;
		if (xR < 0)
			xR = 0;
		if (xR >= WIDTH)
			xR = WIDTH - 1;
		curvePointsL.push_back(cv::Point2f(xL, i));
		curvePointsR.push_back(cv::Point2f(xR, i));
	}
	float slopeL = 1.0 / 2 * curveCoefL(0) * leftLanePos
			- curveCoefL(1) / 2 * curveCoefR(0);
	float slopeR = 1.0 / 2 * curveCoefR(0) * rightLanePos
			- curveCoefR(1) / 2 * curveCoefR(0);
	double thresh_slope = 0.5;
	if (abs(slopeL - slopeR) > thresh_slope) {
		cerr << "[Lane Detection Algo] Lane detection error.";

		failDetectFlag = true;
	} else {
		float slopeRR = -1.0 / curveCoefR(1);
		float slopeLL = -1.0 / curveCoefL(1);
		double slope = (slopeLL + slopeRR) / 2.0;
		slope = atan(slope);
		angle = slope * 180.0 / M_PI;
		if (angle < 0)
			angle = -90 - angle;
		else
			angle = 90 - angle;
		cout << "angle: " << angle << "°" << endl;
	}

	leftLanePos = curvePointsL.back().x;
	rightLanePos = curvePointsR.back().x;
	if ((rightLanePos - leftLanePos) < 300) {
		cerr << "[Lane Detection Algo] There is no enough detected road marks.";
		failDetectFlag = true;
		initRecordCount = 0;
	}
}
void LaneDetection::calibrationInit() {
	cv::Mat cameraMatrix, dist, R;
	cv::FileStorage fsRead;
	fsRead.open(mIntrinsicFileName, cv::FileStorage::READ);
	if (!fsRead.isOpened()) {
		cout << "There is no existing intrinsic parameters XML file." << endl;

	} else {
		fsRead["CameraMatrix"] >> cameraMatrix;
		fsRead["Dist"] >> dist;
		fsRead["R"] >> R;
		fsRead.release();
	}
	int lOffset = 0;
	cv::Mat map1, map2;

	cv::initUndistortRectifyMap(cameraMatrix, dist, R, cameraMatrix,
			cv::Size(1280, 720), CV_32FC1, map1, map2);
	float calTransform[720 * 1280 * 2];
	float *pmytest1 = (float *) map1.data;
	float *pmytest2 = (float *) map2.data;
	cout << "point 1" << endl;
	for (int y = 0; y < 720; y++)
		for (int x = 0; x < 1280; x++) {
			lOffset = 2 * ((y * 1280) + x);
			if (abs(*pmytest1) > 5000)
				*pmytest1 = 5000.00;
			calTransform[lOffset] = (float) *pmytest1;
			pmytest1++;
			if (abs(*pmytest2) > 5000)
				*pmytest2 = 5000.00;
			calTransform[lOffset + 1] = (float) *pmytest2;
			pmytest2++;
		}
	int lRetVal = 0;
	lRetVal |= undistort_Remap.Initialize(calTransform, 1280, 720, 1280,
			apexcv::INTER_LINEAR, apexcv::BORDER_CONSTANT, 0);

}

void LaneDetection::warpInit() {
	const int clSrcWidth = 1280;
	const int clSrcHeight = 720;
	cv::Mat map1(clSrcHeight, clSrcWidth, CV_8UC1, cv::Scalar(0));
	cv::Mat map2(clSrcHeight, clSrcWidth, CV_8UC1, cv::Scalar(0));

	cv::Point2f perspectiveSrc[] = { cv::Point2f(565, 470), cv::Point2f(721,
			470), cv::Point2f(277, 698), cv::Point2f(1142, 698) };

	cv::Point2f perspectiveDst[] = { cv::Point2f(300, 0), cv::Point2f(980, 0),
			cv::Point2f(300, 720), cv::Point2f(980, 720) };

	cv::Mat perspectiveMatrix = getPerspectiveTransform(perspectiveSrc,
			perspectiveDst);

	cv::Mat inv_perspective(perspectiveMatrix.inv());
	inv_perspective.convertTo(inv_perspective, CV_32FC1);

	cv::Mat xy(cv::Size(clSrcWidth, clSrcHeight), CV_32FC2);
	float *pxy = (float *) xy.data;
	for (int y = 0; y < clSrcHeight; y++)
		for (int x = 0; x < clSrcWidth; x++) {
			*pxy++ = x;
			*pxy++ = y;
		}

	cv::Mat xy_transformed;
	cv::perspectiveTransform(xy, xy_transformed, inv_perspective);

	float *pmytest = (float *) xy_transformed.data;
	float lTransform[clSrcWidth * clSrcHeight * 2];
	int lOffset = 0;
	for (int y = 0; y < xy_transformed.rows; y++) {
		for (int x = 0; x < xy_transformed.cols; x++) {
			lOffset = 2 * ((y * clSrcWidth) + x);
			if (abs(*pmytest) > 5000)
				*pmytest = 5000.00;

			lTransform[lOffset] = (float) *pmytest;
			pmytest++;
			if (abs(*pmytest) > 5000)
				*pmytest = 5000.00;
			lTransform[lOffset + 1] = (float) *pmytest;
			pmytest++;
		}
	}

	int lRetVal = 0;
	lRetVal |= warpRemap.Initialize(lTransform, clSrcWidth, clSrcHeight,
			clSrcWidth, apexcv::INTER_LINEAR, apexcv::BORDER_CONSTANT, 0);
	if (lRetVal) {
		printf("Error on Initialize: %d \n", lRetVal);

	}
}

void LaneDetection::setInputImage(vsdk::UMat &image) {
	vsdkOriImage = image;
}

vector<float> LaneDetection::getLaneCenterDist() {
	vector<float> result;
	float laneCenter = ((rightLanePos - leftLanePos) / 2) + leftLanePos;
	float imageCenter = WIDTH / 2;
	float dis_to_center = (laneCenter - imageCenter) * 2.66 / 335.0; //Assume the lane width is 3.5m and about 600 pixels in our image.
	float dis_to_left = (imageCenter - leftLanePos) * 2.66 / 335.0;
	float dis_to_right = (imageCenter - rightLanePos) * 2.66 / 335.0;
	result.push_back(dis_to_center);
	result.push_back(dis_to_left);
	result.push_back(dis_to_right);
	return result;
}

double LaneDetection::getAngle() {
	return angle;
}

Eigen::Vector3d LaneDetection::getCurveCoefL() {
	return curveCoefL;
}
Eigen::Vector3d LaneDetection::getCurveCoefR() {
	return curveCoefR;
}
