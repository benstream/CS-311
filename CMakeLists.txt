# CMakeList.txt : CMake project for Project 1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Project 1")

# Add source to this project's executable.
add_executable (CMakeTarget "delivery.cpp" "delivery_test.cpp" "delivery.h" "doctest.h")

# TODO: Add tests and install targets if needed.
