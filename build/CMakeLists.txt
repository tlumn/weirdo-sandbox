cmake_minimum_required(VERSION 3.10)

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../src)

set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")

set (EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../bin)

project(WeirdoSandbox)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

add_executable(WeirdoSandbox 
    ${PROJECT_DIR}/core/main.cpp
    ${PROJECT_DIR}/graphics/MenuManager.cpp
)