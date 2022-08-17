/*************************************************************
 * File              : main.cpp
 * Author            : Pierre Cariou <pierrecariou@outlook.fr>
 * Date              : 16.08.2022
 * Last Modified Date: 16.08.2022
 * Last Modified By  : Pierre Cariou <pierrecariou@outlook.fr>
 *************************************************************/

#include <iostream>
#include <opencv2/opencv.hpp>

#include <Window.hpp>

void	drawLine(cv::Mat &image)
{
	cv::Point p1(0, 0), p2(100, 0);
    cv::Point p3(200, 0), p4(500, 500);
    int thickness = 2;

	cv::line(image, p1, p4, cv::Scalar(255, 0, 0),
         thickness, cv::LINE_8);
}


/*
void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
	 if (event == cv::EVENT_LBUTTONDOWN) {
          std::cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << std::endl;
     }
}
*/

int	main(int argc, char** argv )
{
    cv::Mat image { cv::imread("resources/calibration.jpg", -1) };
    cv::Mat rawImage { cv::imread("resources/calibration.jpg", -1) };
    if (image.empty() || rawImage.empty()) {
        std::cerr << "Could not read the image" << std::endl;
        return (1);
    }
	cv::resize(image, image, cv::Size(600, 400), cv::INTER_LINEAR);
	cv::resize(rawImage, rawImage, cv::Size(600, 400), cv::INTER_LINEAR);
	Window win(image, rawImage, "Calibration");
	//cv::namedWindow("Calibration", 1);
	//cv::setMouseCallback("Calibration", CallBackFunc, NULL);

	//drawLine(image);
    //cv::imshow("Calibration", image);
    //cv::waitKey(0);
	//cv::destroyWindow("Calibration");
    return (0);
}
