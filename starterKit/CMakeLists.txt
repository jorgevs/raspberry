set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lm -lpthread -lrt -lcrypt")

add_executable(Hello 00.0.0_Hello/Hello.c)
add_executable(Blink 01.1.1_Blink/Blink.c)
add_executable(ButtonLED 02.1.1_ButtonLED/ButtonLED.c)

target_link_libraries(Blink PUBLIC wiringPi)
target_link_libraries(ButtonLED PUBLIC wiringPi)
