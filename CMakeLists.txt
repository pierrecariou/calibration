cmake_minimum_required(VERSION 3.10)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++17")

project(calibration)

#add_subdirectory(
#	${CMAKE_SOURCE_DIR}/opencv
#)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(calibration
  ${CMAKE_SOURCE_DIR}/src/main.cpp
  ${CMAKE_SOURCE_DIR}/src/Window.cpp
  ${CMAKE_SOURCE_DIR}/src/Camera.cpp
)

target_include_directories(calibration PUBLIC
	${CMAKE_SOURCE_DIR}/src
	${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(calibration
  ${OpenCV_LIBS}
)
