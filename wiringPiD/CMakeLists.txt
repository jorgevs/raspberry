set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -lpthread -lrt -lcrypt")

set(WIRINGPID_SRC wiringpid.c network.c runRemote.c daemonise.c)
add_library(wiringpid ${WIRINGPID_SRC})

target_link_libraries(wiringpid PUBLIC wiringPi)
target_include_directories(wiringpid PUBLIC ../wiringPi/)

target_link_libraries(wiringpid PUBLIC wiringPiDev)
target_include_directories(wiringpid PUBLIC ../devLib/)