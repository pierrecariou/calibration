# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pcariou/code/jobs/calibration

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pcariou/code/jobs/calibration/build

# Include any dependencies generated for this target.
include CMakeFiles/calibration.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/calibration.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calibration.dir/flags.make

CMakeFiles/calibration.dir/src/main.cpp.o: CMakeFiles/calibration.dir/flags.make
CMakeFiles/calibration.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pcariou/code/jobs/calibration/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calibration.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calibration.dir/src/main.cpp.o -c /home/pcariou/code/jobs/calibration/src/main.cpp

CMakeFiles/calibration.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calibration.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pcariou/code/jobs/calibration/src/main.cpp > CMakeFiles/calibration.dir/src/main.cpp.i

CMakeFiles/calibration.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calibration.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pcariou/code/jobs/calibration/src/main.cpp -o CMakeFiles/calibration.dir/src/main.cpp.s

CMakeFiles/calibration.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/calibration.dir/src/main.cpp.o.requires

CMakeFiles/calibration.dir/src/main.cpp.o.provides: CMakeFiles/calibration.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/calibration.dir/build.make CMakeFiles/calibration.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/calibration.dir/src/main.cpp.o.provides

CMakeFiles/calibration.dir/src/main.cpp.o.provides.build: CMakeFiles/calibration.dir/src/main.cpp.o


CMakeFiles/calibration.dir/src/Window.cpp.o: CMakeFiles/calibration.dir/flags.make
CMakeFiles/calibration.dir/src/Window.cpp.o: ../src/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pcariou/code/jobs/calibration/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calibration.dir/src/Window.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calibration.dir/src/Window.cpp.o -c /home/pcariou/code/jobs/calibration/src/Window.cpp

CMakeFiles/calibration.dir/src/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calibration.dir/src/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pcariou/code/jobs/calibration/src/Window.cpp > CMakeFiles/calibration.dir/src/Window.cpp.i

CMakeFiles/calibration.dir/src/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calibration.dir/src/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pcariou/code/jobs/calibration/src/Window.cpp -o CMakeFiles/calibration.dir/src/Window.cpp.s

CMakeFiles/calibration.dir/src/Window.cpp.o.requires:

.PHONY : CMakeFiles/calibration.dir/src/Window.cpp.o.requires

CMakeFiles/calibration.dir/src/Window.cpp.o.provides: CMakeFiles/calibration.dir/src/Window.cpp.o.requires
	$(MAKE) -f CMakeFiles/calibration.dir/build.make CMakeFiles/calibration.dir/src/Window.cpp.o.provides.build
.PHONY : CMakeFiles/calibration.dir/src/Window.cpp.o.provides

CMakeFiles/calibration.dir/src/Window.cpp.o.provides.build: CMakeFiles/calibration.dir/src/Window.cpp.o


# Object files for target calibration
calibration_OBJECTS = \
"CMakeFiles/calibration.dir/src/main.cpp.o" \
"CMakeFiles/calibration.dir/src/Window.cpp.o"

# External object files for target calibration
calibration_EXTERNAL_OBJECTS =

calibration: CMakeFiles/calibration.dir/src/main.cpp.o
calibration: CMakeFiles/calibration.dir/src/Window.cpp.o
calibration: CMakeFiles/calibration.dir/build.make
calibration: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
calibration: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
calibration: CMakeFiles/calibration.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pcariou/code/jobs/calibration/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable calibration"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calibration.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calibration.dir/build: calibration

.PHONY : CMakeFiles/calibration.dir/build

CMakeFiles/calibration.dir/requires: CMakeFiles/calibration.dir/src/main.cpp.o.requires
CMakeFiles/calibration.dir/requires: CMakeFiles/calibration.dir/src/Window.cpp.o.requires

.PHONY : CMakeFiles/calibration.dir/requires

CMakeFiles/calibration.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calibration.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calibration.dir/clean

CMakeFiles/calibration.dir/depend:
	cd /home/pcariou/code/jobs/calibration/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pcariou/code/jobs/calibration /home/pcariou/code/jobs/calibration /home/pcariou/code/jobs/calibration/build /home/pcariou/code/jobs/calibration/build /home/pcariou/code/jobs/calibration/build/CMakeFiles/calibration.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calibration.dir/depend
