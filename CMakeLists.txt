cmake_minimum_required(VERSION 3.13)
project(raspberry)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(MyDevLibs)
add_subdirectory(BlinkLed)
add_subdirectory(Print_to_i2clcd)

add_executable(raspberry main.cpp)