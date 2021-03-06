#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread -lm -lcrypt -lrt")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lpthread -lm -lcrypt -lrt")

add_executable(blink blink.c)
add_executable(blink8 blink8.c)
add_executable(blink12 blink12.c)
add_executable(blink12drcs blink12drcs.c)
add_executable(pwm pwm.c)
add_executable(speed speed.c)
add_executable(wfi wfi.c)
add_executable(isr isr.c)
add_executable(isr-osc isr-osc.c)
add_executable(lcd lcd.c)
add_executable(lcd-adafruit lcd-adafruit.c)
add_executable(clock clock.c)
add_executable(nes nes.c)
add_executable(softPwm softPwm.c)
add_executable(softTone softTone.c)
add_executable(delayTest delayTest.c)
add_executable(serialRead serialRead.c)
add_executable(serialTest serialTest.c)
add_executable(okLed okLed.c)
add_executable(ds1302 ds1302.c)
add_executable(lowPower lowPower.c)
add_executable(max31855 max31855.c)
add_executable(rht03 rht03.c)

target_link_libraries(blink PUBLIC wiringPi wiringPiDev)
target_link_libraries(blink8 PUBLIC wiringPi wiringPiDev)
target_link_libraries(blink12 PUBLIC wiringPi wiringPiDev)
target_link_libraries(blink12drcs PUBLIC wiringPi wiringPiDev)
target_link_libraries(pwm PUBLIC wiringPi wiringPiDev)
target_link_libraries(speed PUBLIC wiringPi wiringPiDev)
target_link_libraries(wfi PUBLIC wiringPi wiringPiDev)
target_link_libraries(isr PUBLIC wiringPi wiringPiDev)
target_link_libraries(isr-osc PUBLIC wiringPi wiringPiDev)
target_link_libraries(lcd PUBLIC wiringPi wiringPiDev)
target_link_libraries(lcd-adafruit PUBLIC wiringPi wiringPiDev)
target_link_libraries(clock PUBLIC wiringPi wiringPiDev)
target_link_libraries(nes PUBLIC wiringPi wiringPiDev)
target_link_libraries(softPwm PUBLIC wiringPi wiringPiDev)
target_link_libraries(softTone PUBLIC wiringPi wiringPiDev)
target_link_libraries(delayTest PUBLIC wiringPi wiringPiDev)
target_link_libraries(serialRead PUBLIC wiringPi wiringPiDev)
target_link_libraries(serialTest PUBLIC wiringPi wiringPiDev)
target_link_libraries(okLed PUBLIC wiringPi wiringPiDev)
target_link_libraries(ds1302 PUBLIC wiringPi wiringPiDev)
target_link_libraries(lowPower PUBLIC wiringPi wiringPiDev)
target_link_libraries(max31855 PUBLIC wiringPi wiringPiDev)
target_link_libraries(rht03 PUBLIC wiringPi wiringPiDev)
