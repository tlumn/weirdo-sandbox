cmake_minimum_required(VERSION 3.10)

set( CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe" )
set( CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe" )

project(WeirdoSandbox)

include_directories(util)

add_executable(main main.cpp)

target_sources(main PRIVATE
    util/MenuManager.h
)