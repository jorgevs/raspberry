#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -lpthread -lrt -lcrypt")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lm -lpthread -lrt -lcrypt")

set(GPIO_SRC gpio.c readall.c)
add_executable(gpio ${GPIO_SRC})

target_link_libraries(gpio PUBLIC wiringPi wiringPiDev)

#target_include_directories(gpio PUBLIC ../wiringPi/)
#target_include_directories(gpio PUBLIC ../devLib/)