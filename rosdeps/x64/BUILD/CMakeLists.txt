cmake_minimum_required(VERSION 2.8.1)

project(MicoMoveIt)

set(CMAKE_CXX_FLAGS "-std=c++11")

file(GLOB srcs *.cpp)

include_directories(/opt/ros/indigo/include)

link_directories(/opt/ros/indigo/lib)

add_executable(${PROJECT_NAME} ${srcs})