//
// Created by adam on 18-7-17.
//
#ifndef LANE_DETECT_LaneDetection_H
#define LANE_DETECT_LaneDetection_H

#ifndef VSDK_UMAT_USE_OPENCV
#define VSDK_UMAT_USE_OPENCV
#endif

#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <time.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <Eigen/Dense>
#include <apexcv_pro_resize.h>
#include "math.h"
#include "umat.hpp"

#ifndef APEX2_EMULATE
#include "apex.h"
#endif

#include <apexcv_base.h>
#include <apexcv_pro_canny.h>
#include "apexcv_pro_remap.h"
#include <ACF_FILTERS_NO_REG.hpp>
#include <ACF_FILTERS_NO_REG_APU_LOAD.h>
using namespace std;

class LaneDetection {
private:
    int lRetVal = 1;
    apexcv::Add add_op;
    apexcv::Resize resize;

    apexcv::ColorConverter colorcv2rgb_op;
    apexcv::ColorConverter colorcv2grey_op;
    apexcv::ThresholdRange range_op;
    apexcv::ThresholdRange range_op2;
    apexcv::SplitChannel split_op;
    apexcv::Canny canny_op;
    apexcv::BitwiseAND bitwiseAND_op;
    //apexcv::Histogram HistCaculate_op;

    vsdk::UMat outResize;
    cv::Mat perspectiveMatrix;
    cv::UMat oriImage; //The original input image.
    cv::UMat wrapImageGray;
    cv::UMat edgeImage; // The result of applying canny edge detection.
    cv::UMat warpOriImage;
    cv::UMat RedBinary;
    cv::Mat mergeImage;
    cv::UMat mergeImageRGB;
    cv::UMat histImage; //Histogram visualization.
    cv::UMat maskImage; //The curve image used to blend to the original image.
    cv::UMat maskImageWarp;
    cv::UMat finalResult;

    apexcv::Resize oriResize_op;
    vsdk::UMat vsdkOriImageGray;

    vector<int> histogram; //Histogram of the detected features
    vector<cv::Point2f> laneL;
    vector<cv::Point2f> laneR;
    vector<cv::Point2f> curvePointsL;
    vector<cv::Point2f> curvePointsR;
    int laneLcount;
    int laneRcount;
    const int HEIGHT = 360;
    const int WIDTH = 640;
    double angle;
    vsdk::UMat vsdkMergeImage1;
    int count = 0;

    vsdk::UMat vsdkWarpOriImage;
    vsdk::UMat vsdkWrapImageGray;
    vsdk::UMat imageChannelR;
    vsdk::UMat imageChannelG;
    vsdk::UMat imageChannelB;
    vsdk::UMat vsdkRedBinary;
    vsdk::UMat vsdkWarpEdgeImage;
    vsdk::UMat vsdkWarpEdgeImageAfterRange;
    vsdk::UMat vsdkMergeImage;
    vsdk::UMat vsdkMergeImageRGB;
    vsdk::UMat vsdkOriImage;
    vsdk::UMat vsdkUndistorted;
    vsdk::UMat imageAfterWarp;

    cv::UMat warpEdgeImage;

    int midPoint; //The mid position of the view.

    int midHeight;
    int leftLanePos; //The detected left lane boundary position.
    int rightLanePos; //The detected right lane boundary position.
    short initRecordCount; // To record the number of times of executions in the first 5 frames.
    const int blockNum; //Number of windows per line.
    int stepY; //Window moving step.
    const int windowSize; //Window Size (Horizontal).
    Eigen::Vector3d curveCoefL; //The coefficients of the curve (left).
    Eigen::Vector3d curveCoefR; //The coefficients of the curve (left).
    Eigen::Vector3d curveCoefRecordL[5]; //To keep the last five record to smooth the current coefficients (left).
    Eigen::Vector3d curveCoefRecordR[5]; //To keep the last five record to smooth the current coefficients (right).
    int recordCounter;
    bool failDetectFlag; // To indicate whether the road marks is detected succesfully.
    bool firstFlag = true;
    string mIntrinsicFileName;


    apexcv::Remap undistort_Remap;
    apexcv::Remap warpRemap;


    void calHist();

    void boundaryDetection();

    void laneSearch(const int &lanePos, vector<cv::Point2f> &_line, int &lanecount, vector<cv::Point2f> &curvePoints,
                    char dir);

    bool laneCoefEstimate();

    void laneFitting();

    void calibrationInit();

    void warpInit();

public:
    LaneDetection(string intrinsicFileName);

    ~LaneDetection();

    void process();

    vector<float> getLaneCenterDist();

    void setInputImage(vsdk::UMat &image);

    Eigen::Vector3d getCurveCoefL();
    Eigen::Vector3d getCurveCoefR();

    double getAngle();

};

#endif //LANE_DETECT_LaneDetection_H
