cmake_minimum_required(VERSION 3.5) 
project(ipk-Blatt07 LANGUAGES CXX) 
set(CMAKE_CXX_STANDARD 14) 

# CMAKE_BUILD_TYPE(RELEASE)
enable_testing()

add_library(point_lib point.cpp)

add_executable(main main.cpp)
target_link_libraries(main point_lib)

add_executable(test_point test_point.cc)
add_test(NAME test_point COMMAND test_point)

add_executable(statistics statisticsdriver.cc io.cc)
add_test(NAME statistics COMMAND statistics)