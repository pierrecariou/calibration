/*************************************************************
 * File              : Window.hpp
 * Author            : Pierre Cariou <pierrecariou@outlook.fr>
 * Date              : 16.08.2022
 * Last Modified Date: 16.08.2022
 * Last Modified By  : Pierre Cariou <pierrecariou@outlook.fr>
 *************************************************************/

#ifndef WINDOW_HPP
# define WINDOW_HPP

#include <opencv2/opencv.hpp>
#include <Camera.hpp>

class Window {
	public:
		Window(cv::Mat &image, cv::Mat &rawImage, std::string name);
		~Window();
	private:
		void	initialize();
		void	drawRectangle();
		void	startComputation();
		void	showCameraPosition(const Camera &cam) const;

		void getPoint(int x, int y);
		static void getUserInput(int event, int x, int y, int flags, void* userdata);

		cv::Mat image;
		cv::Mat rawImage;
		std::string name;
		std::vector<cv::Point2f> coordinates; // for stocking 4 rectangle corners
};

#endif
