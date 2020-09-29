#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -lpthread -lrt -lcrypt")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lm -lpthread -lrt -lcrypt")

set(WIRINGPI_SRC wiringPi.c
        wiringSerial.c wiringShift.c
        piHiPri.c piThread.c
        wiringPiSPI.c wiringPiI2C.c
        softPwm.c softTone.c
        mcp23008.c mcp23016.c mcp23017.c
        mcp23s08.c mcp23s17.c
        sr595.c
        pcf8574.c pcf8591.c
        mcp3002.c mcp3004.c mcp4802.c mcp3422.c
        max31855.c max5322.c ads1115.c
        sn3218.c
        bmp180.c htu21d.c ds18b20.c rht03.c
        drcSerial.c drcNet.c
        pseudoPins.c
        wpiExtensions.c)

add_library(wiringPi ${WIRINGPI_SRC})

target_include_directories(wiringPi PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
