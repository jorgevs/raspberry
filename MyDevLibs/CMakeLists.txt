
set(SOURCE_FILES i2c_lcd.cpp i2c_lcd.h)

add_library(i2c_lcd ${SOURCE_FILES})

target_include_directories(wiringPi PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})