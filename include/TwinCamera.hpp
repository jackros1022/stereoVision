#ifndef TWINCAMERA_HPP
#define TWINCAMERA_HPP

#include<Camera.hpp>


class TwinCamera{
public:
	TwinCamera(int cam_1, int cam_2);
	~TwinCamera();
	
	void getDoubleImages(cv::Mat &img1, cv::Mat &img2);
	void rectifyForStereo(cv::Mat &img1, cv::Mat &img2);
	
	bool loadCameraParameters(char *filename, cv::Mat img1, cv::Mat img2);
protected:
	int camInd1, camInd2;
	Camera Cam1, Cam2;
	//matrixes for calibration
	bool calibMatrixLoaded;
	cv::Mat map1x, map1y, map2x, map2y;
};


#endif
