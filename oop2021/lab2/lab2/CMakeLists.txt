cmake_minimum_required(VERSION 3.20)
project(lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab2 lab2.cpp)

include_directories(../library)

target_link_libraries(lab2 library)
