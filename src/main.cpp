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

int	main(int argc, char** argv )
{
    cv::Mat image { cv::imread("resources/calibration.jpg", -1) };
    cv::Mat rawImage { cv::imread("resources/calibration.jpg", -1) };
    if (image.empty() || rawImage.empty()) {
        std::cerr << "Could not read the image" << std::endl;
        return (1);
    }
	cv::resize(image, image, cv::Size(2560/2, 1920/2), cv::INTER_LINEAR);
	cv::resize(rawImage, rawImage, cv::Size(2560/2, 1920/2), cv::INTER_LINEAR);
	Window win(image, rawImage, "Calibration");
    return (0);
}
