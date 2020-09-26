
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lwiringPi")

add_library(myDevLibs ../MyDevLibs/i2clcd.cpp)
target_include_directories(myDevLibs PUBLIC ../MyDevLibs)

set(PRINT_TO_I2CLCD_SOURCE_FILES print_to_i2clcd.cpp)
add_executable(Print_to_i2clcd ${PRINT_TO_I2CLCD_SOURCE_FILES})

target_link_libraries(Print_to_i2clcd PUBLIC myDevLibs)
