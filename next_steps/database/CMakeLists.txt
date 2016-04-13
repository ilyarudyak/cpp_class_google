cmake_minimum_required(VERSION 3.5)
project(database)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Composer.cpp Composer.h Database.cpp Database.h)
add_executable(database ${SOURCE_FILES})