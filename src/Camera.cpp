/*************************************************************
 * File              : Camera.cpp
 * Author            : Pierre Cariou <pierrecariou@outlook.fr>
 * Date              : 18.08.2022
 * Last Modified Date: 18.08.2022
 * Last Modified By  : Pierre Cariou <pierrecariou@outlook.fr>
 *************************************************************/

#include <Camera.hpp>
#include <constants.hpp>

using namespace constants;

Camera::Camera(const std::vector<cv::Point2f> &imagePoints)
	: imagePoints(imagePoints)
{
	// A4 papersheet real 3d world coordinates
	objectPoints.push_back(cv::Point3f(0, 0, 0));
	objectPoints.push_back(cv::Point3f(297, 0, 0));
	objectPoints.push_back(cv::Point3f(297, 210, 0));
	objectPoints.push_back(cv::Point3f(0, 210, 0));
}

Camera::~Camera()
{

}

void	Camera::calibrate()
{
	cv::Mat cameraMatrix = (cv::Mat1d(3, 3)
			<< fx, 0, cx, 0, fy, cy, 0, 0, 1);
	cv::Mat distortionCoefficients = (cv::Mat1d(1, 8)
			<< k1, k2, p1, p2, k3, k4, k5, k6);

	// creates rvec and tvec
	cv::solvePnP(objectPoints,imagePoints, cameraMatrix, distortionCoefficients, rvec, tvec, false, cv::SOLVEPNP_P3P);
}

void	Camera::test(cv::Mat &image)
{
	// reprojection from 3D points to 2D points
	// call this function only for testing purpose
	cv::Mat cameraMatrix = (cv::Mat1d(3, 3)
			<< fx, 0, cx, 0, fy, cy, 0, 0, 1);
	cv::Mat distortionCoefficients = (cv::Mat1d(1, 8)
			<< k1, k2, p1, p2, k3, k4, k5, k6);
	std::vector<cv::Point2f> points;
	cv::projectPoints(objectPoints, rvec, tvec, cameraMatrix, distortionCoefficients, points);
	for (unsigned int i = 0; i < points.size(); ++i)
		std::cout << "Image point: " << imagePoints[i] << " projected to " << points[i] << std::endl;
}

void	Camera::calculatePosition()
{
	cv::Mat R;
	cv::Rodrigues(rvec, R); // Convert the output rotation vector into a rotation matrix (3 x 3)

	R = R.t();  // rotation of inverse
	position = -R * tvec; // translation of inverse
}

const cv::Mat &Camera::getPosition() const
{
	return position;
}
