#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread -lm")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lpthread -lm")

add_executable(scphat scphat.c)
add_executable(test test.c)

target_link_libraries(scphat PUBLIC wiringPi wiringPiDev)
target_link_libraries(test PUBLIC wiringPi wiringPiDev)
