#!/bin/bash

cd build
cmake ..
cmake --build
make
mv calibration ..
