cmake_minimum_required(VERSION 3.5) 
project(ipk-Blatt06 LANGUAGES CXX) 
set(CMAKE_CXX_STANDARD 14) 

# CMAKE_BUILD_TYPE(RELEASE)

add_library(canvas canvas.cc point.cc)

add_executable(pixelgrafiken pixelgrafiken.cc)

target_link_libraries(pixelgrafiken PUBLIC canvas)