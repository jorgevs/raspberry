#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread -lm")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lpthread -lm")

add_executable(blinkC blink.c)
add_executable(button button.c)
add_executable(blink-io blink-io.c)
add_executable(volts volts.c)
add_executable(bright bright.c)

target_link_libraries(blinkC PUBLIC wiringPi wiringPiDev)
target_link_libraries(button PUBLIC wiringPi wiringPiDev)
target_link_libraries(blink-io PUBLIC wiringPi wiringPiDev)
target_link_libraries(volts PUBLIC wiringPi wiringPiDev)
target_link_libraries(bright PUBLIC wiringPi wiringPiDev)
