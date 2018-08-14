LaneDetection Class Reference

Required：apexcv_arithmetic;apexcv_pro_canny;apexcv_color_conversion;apexcv_core;apexcv_pro_resize;apexcv_pro_remap

Public Member Functions:
----------------------
* LaneDetection(string warpFileName)
LaneDetection类构造方法，注意此类构造方法为耗时操作，请在循环外定义该类的对象

Parameters：
    warpFileName - Intrinsic.xml文件路径，去畸变参数文件
----------------------
* void process()
车道线检测处理方法
----------------------
* void setInputImage(vsdk::UMat &image)
输入待检测的视频帧图片

Parameters：
    image - source image (vsdk::UMat)
----------------------
* vector<float> getLaneCenterDist()
获取距离车道中心、左边线和右边线的距离

Returns:
    result - (vector<float>) result[0]:距中线距离 result[1]:距左线距离 result[2]:距右线距离
----------------------
* Eigen::Vector3d getCurveCoefL()
获取拟合左车道二次多项式系数，x=a*y^2+b*y+c

Returns:
    curveCoefL - (Eigen::Vector3d) 系数a=curveCoefL(0) 系数b=curveCoefL(1) 系数c=curveCoefL(2)
----------------------
* Eigen::Vector3d getCurveCoefR()
获取拟合右车道二次多项式系数，x=a*y^2+b*y+c

Returns:
    curveCoefL - (Eigen::Vector3d) 系数a=curveCoefL(0) 系数b=curveCoefL(1) 系数c=curveCoefL(2)
----------------------
* double getAngle()
获取车辆相对车道线的夹角

Returns：
    angle - (double) 偏向左侧为正角度，偏向右侧为负角度


----------------------

Example：

int main() {

    LaneDetection ld("./Intrinsic.xml");//创建LaneDetection对象，指定Intrinsic.xml路径
    vector<float> dis_vector;//创建变量保存距离左右侧车道结果

    videoFrame = getFrameFromVideo();//读取视频帧

    while(!videoFrame.empty()) {
        ld.setInputImage(videoFrame.getUMatImage());//输入待检测的视频图像

        ld.process();//执行检测

        dis_vector = ld.getLaneCenterDist();//获取结果
        cout<<"TO Center: "<<dis_vector[0]<<endl;
        cout<<"TO Left: "<<dis_vector[1]<<endl;
        cout<<"TO Right: "<<dis_vector[2]<<endl;



        videoFrame = getNextFrame();//读下一帧
    }

    return 0;
}