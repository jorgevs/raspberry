set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -lpthread -lrt -lcrypt")

set(BLINK_LED_SRC blink_led.cpp)
add_executable(blink_led ${BLINK_LED_SRC})

target_link_libraries(blink_led PUBLIC wiringPi)
target_include_directories(blink_led PUBLIC ../wiringPi/)