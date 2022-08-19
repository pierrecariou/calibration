/*************************************************************
 * File              : main.cpp
 * Author            : Pierre Cariou <pierrecariou@outlook.fr>
 * Date              : 16.08.2022
 * Last Modified Date: 16.08.2022
 * Last Modified By  : Pierre Cariou <pierrecariou@outlook.fr>
 *************************************************************/

#include <iostream>
#include <opencv2/opencv.hpp>
#include <stdlib.h>
#include <errno.h>

#include <Window.hpp>


void	errorArguments(char *arg, const long &result, char *endptr)
{
	if ((errno == ERANGE && (result == LONG_MAX || result == LONG_MIN))
            || (errno != 0 && result == 0)) {
        perror("strtol");
        exit(EXIT_FAILURE);
    }
    if (endptr == arg) {
        std::cerr << "Aucun chiffre trouvé" << std::endl;
    	exit(EXIT_FAILURE);
    }
}

int	main(int argc, char** argv)
{
	if (argc != 3)
	{
		std::cerr << "USAGE: ./calibration [image_width] [image_height]" << std::endl;
		return (1);
	}
	char *endptr;
	errno = 0;
	long width = strtol(argv[1], &endptr, 10);
	errorArguments(argv[1], width, endptr);
	errno = 0;
	long height = strtol(argv[2], &endptr, 10);
	errorArguments(argv[2], height, endptr);
	
    cv::Mat image { cv::imread("resources/calibration.jpg", -1) };
    cv::Mat rawImage { cv::imread("resources/calibration.jpg", -1) };
    if (image.empty() || rawImage.empty()) {
        std::cerr << "Could not read the image" << std::endl;
        return (1);
    }
	cv::resize(image, image, cv::Size(width, height), cv::INTER_LINEAR);
	cv::resize(rawImage, rawImage, cv::Size(width, height), cv::INTER_LINEAR);
	Window win(image, rawImage, "Calibration");
    return (0);
}
