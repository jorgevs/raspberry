
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lwiringPi")

set(BLINK_LED_SOURCE_FILES blinkLed.cpp)

add_executable(blinkLed ${BLINK_LED_SOURCE_FILES})