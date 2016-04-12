cmake_minimum_required(VERSION 3.5)
project(example2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(example2 ${SOURCE_FILES})