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

class Window {
	public:
		Window(cv::Mat &image, cv::Mat &rawImage, std::string name);
		~Window();
	private:
		void	initialize();
		void	drawRectangle();

		void getPoint(int event, int x, int y);
		static void getUserInput(int event, int x, int y, int flags, void* userdata);

//		void CallBackFunc(int event, int x, int y, int flags, void* userdata);
		cv::Mat image;
		cv::Mat rawImage;
		std::string name;
		std::vector<cv::Point> coordinates;
};

#endif
