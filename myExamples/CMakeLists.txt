set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -lpthread -lrt -lcrypt")

add_executable(blink_led blink_led.cpp)
add_executable(getRaspPiInfo getRaspPiInfo.cpp)

target_link_libraries(blink_led PUBLIC wiringPi wiringPiDev)
target_link_libraries(getRaspPiInfo PUBLIC wiringPi wiringPiDev)
