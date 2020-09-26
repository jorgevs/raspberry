set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -lpthread -lrt -lcrypt")

set(PRINT_TO_I2CLCD_SRC print_to_i2clcd.cpp)
add_executable(print_to_i2clcd ${PRINT_TO_I2CLCD_SRC})

target_link_libraries(print_to_i2clcd PUBLIC wiringPi)
target_include_directories(print_to_i2clcd PUBLIC ../wiringPi/)

target_link_libraries(print_to_i2clcd PUBLIC i2c_lcd)
target_include_directories(print_to_i2clcd PUBLIC ../MyDevLibs/)