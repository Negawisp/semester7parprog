cmake_minimum_required(VERSION 3.15)
project(task1cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fopenmp")

add_executable(task1cpp main.cpp)