cmake_minimum_required(VERSION 3.8)
project(TH_Tin_C_)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES "main.c" cmake-build-debug/class.c)
add_executable(TH_Tin_C_ ${SOURCE_FILES})