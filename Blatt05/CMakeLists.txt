# Set minimum required CMake version 
cmake_minimum_required(VERSION 3.5) 

# Start project and set its name to ipk-demo 
project(ipk-Blatt05 LANGUAGES CXX) 

# Force compiler to run in C++14 mode 
set(CMAKE_CXX_STANDARD 14) 

# Create executable programs 
add_executable(02_statistiken readvector.cc uniform_distribution.cc normal.cc)