
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lwiringPi")

add_library(i2c_lcd ../MyDevLibs/i2c_lcd.cpp)
target_include_directories(i2c_lcd PUBLIC ../MyDevLibs)

set(PRINT_TO_I2CLCD_SRC print_to_i2clcd.cpp)
add_executable(print_to_i2clcd ${PRINT_TO_I2CLCD_SRC})

target_link_libraries(print_to_i2clcd PUBLIC i2c_lcd)
