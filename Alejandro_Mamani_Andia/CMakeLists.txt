cmake_minimum_required(VERSION 3.13)
project(2019)

set(CMAKE_CXX_STANDARD 14)

add_executable(2019 main.cpp main_test.cpp Unionfind.cpp Unionfind.h catch.hpp )