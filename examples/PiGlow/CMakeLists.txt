#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread -lm")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lpthread -lm")

add_executable(piGlow0 piGlow0.c)
add_executable(piGlow1 piGlow1.c)
add_executable(piglow piglow.c)

target_link_libraries(piGlow0 PUBLIC wiringPi wiringPiDev)
target_link_libraries(piGlow1 PUBLIC wiringPi wiringPiDev)
target_link_libraries(piglow PUBLIC wiringPi wiringPiDev)
