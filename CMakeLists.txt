cmake_minimum_required(VERSION 3.13)
project(raspberry)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(wiringPi)
add_subdirectory(devLib)
add_subdirectory(wiringPiD)
add_subdirectory(gpio)
add_subdirectory(MyDevLibs)
add_subdirectory(PrintToI2clcd)
add_subdirectory(examples)
add_subdirectory(myExamples)

#add_subdirectory(examples/PiFace)
#add_subdirectory(examples/Gertboard)
#add_subdirectory(examples/PiGlow)
add_subdirectory(examples/q2w)
#add_subdirectory(examples/scrollPhat)

add_executable(raspberry main.cpp)
