cmake_minimum_required(VERSION 3.26)
project(class_suite)

set(CMAKE_CXX_STANDARD 17)

add_executable(class_suite main.cpp
        Suite.cpp
        Suite.h)
