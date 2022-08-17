/*************************************************************
 * File              : Window.cpp
 * Author            : Pierre Cariou <pierrecariou@outlook.fr>
 * Date              : 16.08.2022
 * Last Modified Date: 16.08.2022
 * Last Modified By  : Pierre Cariou <pierrecariou@outlook.fr>
 *************************************************************/

#include <Window.hpp>

bool comparePoints(const cv::Point &p1, const cv::Point &p2) {
	    return p1.y < p2.y;
}

bool comparePoints1(const cv::Point &p1, const cv::Point &p2) {
	    return p1.x < p2.x;
}

bool comparePoints2(const cv::Point &p1, const cv::Point &p2) {
	    return p1.x > p2.y;
}

Window::Window(cv::Mat &image, cv::Mat &rawImage, std::string name)
	: image(image), rawImage(rawImage), name(name)
{
	initialize();
}

Window::~Window()
{
	cv::destroyWindow(name);
}

void	Window::initialize()
{
	cv::namedWindow(name, 1);
	cv::setMouseCallback(name, getUserInput, this);
	cv::putText(image, "Please click on the 4 rectangle corners", cv::Point(10, image.rows - 10), 5    , 1, CV_RGB(255, 255, 255), 2);

	//drawLine(image);
    cv::imshow(name, image);
    cv::waitKey(0);
}

void	Window::drawRectangle()
{
		// sort coordinates clockwise
		std::sort(coordinates.begin(), coordinates.end(), comparePoints);
		std::sort(coordinates.begin(), coordinates.end() - 2, comparePoints1);
		std::sort(coordinates.begin() + 2, coordinates.end(), comparePoints2);
		
		std::vector<std::vector<cv::Point>> corners(1, coordinates);
		image = rawImage;
		cv::drawContours(image, corners, -1, cv::Scalar(0, 255, 0), 2, cv::LINE_8);	
		//cv::putText(image, "Please click on the 4 dededee", cv::Point(10, image.rows - 10), 5, 1, CV_RGB(255, 255, 255), 2);
    	cv::imshow(name, rawImage);
}

void	Window::getPoint(int event, int x, int y)
{
	if (coordinates.size() >= 4)
		return ;
	coordinates.push_back(cv::Point(x, y));
	cv::circle(image, cv::Point(x, y), 2, cv::Scalar(0, 255, 0), 2, cv::FILLED);
    cv::imshow(name, image);
	if (coordinates.size() == 4)
		drawRectangle();
}

void	Window::getUserInput(int event, int x, int y, int flags, void* userdata)
{
	 if (event == cv::EVENT_LBUTTONDOWN) {
     //   std::cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << std::endl;
		Window* win = reinterpret_cast<Window*>(userdata);
    	win->getPoint(event, x, y);	
     }
}
