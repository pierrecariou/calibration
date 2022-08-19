/*************************************************************
 * File              : Window.cpp
 * Author            : Pierre Cariou <pierrecariou@outlook.fr>
 * Date              : 16.08.2022
 * Last Modified Date: 16.08.2022
 * Last Modified By  : Pierre Cariou <pierrecariou@outlook.fr>
 *************************************************************/

#include <Window.hpp>

bool yComp(const cv::Point2f &p1, const cv::Point2f &p2) {
	return p1.y < p2.y;
}

bool xComp(const cv::Point2f &p1, const cv::Point2f &p2) {
	return p1.x < p2.x;
}

bool xCompInv(const cv::Point2f &p1, const cv::Point2f &p2) {
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
	cv::putText(image, "Please click on the 4 rectangle corners"
			, cv::Point2f(10, image.rows - 10), 5, 1, CV_RGB(255, 255, 255), 2);

	cv::imshow(name, image);
	cv::waitKey(0);
}

void	Window::drawRectangle()
{
	// sort coordinates clockwise
	std::sort(coordinates.begin(), coordinates.end(), yComp);
	std::sort(coordinates.begin(), coordinates.end() - 2, xComp);
	std::sort(coordinates.begin() + 2, coordinates.end(), xCompInv);

	std::vector<std::vector<cv::Point>> corners(1); // new data type for coordinates points (parameter of drawContours func)
	for (cv::Point2f p : coordinates)
		corners[0].push_back(cv::Point(p.x, p.y));
	image = rawImage;
	cv::drawContours(image, corners, -1, cv::Scalar(0, 255, 0), 2, cv::LINE_8);	
	cv::imshow(name, rawImage);
	startComputation();
}

// write circles on user clicks and get pixels values
void	Window::getPoint(int x, int y)
{
	if (coordinates.size() >= 4)
		return ;
	coordinates.push_back(cv::Point2f(x, y));
	cv::circle(image, cv::Point2f(x, y), 2, cv::Scalar(0, 255, 0), 2, cv::FILLED);
	cv::imshow(name, image);
	if (coordinates.size() == 4)
		drawRectangle();
}

void	Window::getUserInput(int event, int x, int y, int flags, void* userdata)
{
	// user event: click on rectangle corner
	if (event == cv::EVENT_LBUTTONDOWN) {
		Window* win = reinterpret_cast<Window*>(userdata);
		win->getPoint(x, y);	
	}
}

void	Window::startComputation()
{
	Camera cam(coordinates);

	cam.calibrate();
	// cam.test(image);
	cam.calculatePosition();
	showCameraPosition(cam);
}

void	Window::showCameraPosition(const Camera &cam) const
{
	std::stringstream cameraPosition;
	cameraPosition << "x: " << cam.getPosition().at<double>(0, 0) << " y: "
		<< cam.getPosition().at<double>(0, 1) << " z: " << cam.getPosition().at<double>(0, 2);

	cv::putText(image, "** Camera position **", cv::Point2f(10, image.rows - 40), 5, 1, CV_RGB(255, 255, 255), 2);
	cv::putText(image, cameraPosition.str(), cv::Point2f(10, image.rows - 10), 5, 1, CV_RGB(255, 255, 255), 2);
	cv::imshow(name, image);

	std::cout << "** Camera Position **" << std::endl << std::endl << cam.getPosition() << std::endl;
}
