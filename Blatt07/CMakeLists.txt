cmake_minimum_required(VERSION 3.5) 
project(ipk-Blatt07 LANGUAGES CXX) 
set(CMAKE_CXX_STANDARD 14) 

# CMAKE_BUILD_TYPE(RELEASE)

add_library(point point.cc)
add_library(statistics statisticsdriver.cc)

add_executable(main main.cpp)
#add_executable(statistics statisticsdriver.cc)

target_link_libraries(main PUBLIC point statistics)
