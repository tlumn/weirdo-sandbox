cmake_minimum_required(VERSION 3.10)

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../project)

set( CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe" )
set( CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe" )

project(WeirdoSandbox)

include_directories(${PROJECT_DIR}/util)

add_executable(WeirdoSandbox 
    ${PROJECT_DIR}/main.cpp
)