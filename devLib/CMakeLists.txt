#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -lpthread -lrt -lcrypt")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lm -lpthread -lrt -lcrypt")

set(WIRINGPIDEV_SRC ds1302.c maxdetect.c piNes.c
        gertboard.c piFace.c
        lcd128x64.c lcd.c
        scrollPhat.c
        piGlow.c)

add_library(wiringPiDev ${WIRINGPIDEV_SRC})

target_include_directories(wiringPiDev PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
