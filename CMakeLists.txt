cmake_minimum_required(VERSION 3.13)
project(raspberry)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(BlinkLed)
add_subdirectory(devLib)
add_subdirectory(wiringPiD)
add_subdirectory(wiringPi)
add_subdirectory(gpio)
add_subdirectory(MyDevLibs)
add_subdirectory(PrintToI2clcd)

add_executable(raspberry main.cpp)
#add_executable(main2 main2.cpp)