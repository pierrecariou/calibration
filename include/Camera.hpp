/*************************************************************
 * File              : Camera.hpp
 * Author            : Pierre Cariou <pierrecariou@outlook.fr>
 * Date              : 18.08.2022
 * Last Modified Date: 18.08.2022
 * Last Modified By  : Pierre Cariou <pierrecariou@outlook.fr>
 *************************************************************/

#ifndef CAMERA_HPP
# define CAMERA_HPP

#include <opencv2/opencv.hpp>
#include <vector>

class Camera {
	public:
		Camera(const std::vector<cv::Point2f> &imagePoints);
		~Camera();

		void	calibrate();
		void	calculatePosition();
		void	test(cv::Mat &image);

		// Accessor
		const cv::Mat &getPosition() const;

	private:
		std::vector<cv::Point2f> imagePoints; // 2d pixels points (corners of rectangle)
		std::vector<cv::Point3f> objectPoints; // real 3d points (corners of rectangle)
		cv::Mat rvec; // Rodrigues vector
		cv::Mat tvec; // simple translation vector
		cv::Mat position;
};

#endif
