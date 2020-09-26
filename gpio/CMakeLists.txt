
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lwiringPi")

set(GPIO_SRC gpio.c, readall.c)

add_executable(gpio ${GPIO_SRC})