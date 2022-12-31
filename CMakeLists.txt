cmake_minimum_required(VERSION 3.24)
project(StringLib C)

set(CMAKE_C_STANDARD 99)

add_executable(StringLib main.c strLib.h cmake-build-debug/strLib.c)
