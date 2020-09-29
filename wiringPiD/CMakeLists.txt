#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -lpthread -lrt -lcrypt")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lm -lpthread -lrt -lcrypt")

set(WIRINGPID_SRC wiringpid.c network.c runRemote.c daemonise.c)
add_executable(wiringpid ${WIRINGPID_SRC})

target_link_libraries(wiringpid PUBLIC wiringPi wiringPiDev)

#target_include_directories(wiringpid PUBLIC ../wiringPi/)
#target_include_directories(wiringpid PUBLIC ../devLib/)