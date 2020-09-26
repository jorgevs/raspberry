
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lwiringPi")

set(BLINK_LED_SRC blink_led.cpp)

add_executable(blink_led ${BLINK_LED_SRC})