# Versão
cmake_minimum_required(VERSION 3.10)

# Projeto
project(WeirdoSandbox)

# Setando diretório base
set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../src)

# Setando path dos compiladores
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")

# Setando diretório do executável
set (EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../bin)

# Inclusão dos diretórios (cabeçalhos)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

# Lista de código fontes para gráficos (cpp)
set(GRAPHICS_SOURCES
    ${PROJECT_DIR}/graphics/MenuManager.cpp
)

# Lista de código fontes para gráficos (cpp)
#set(UTILITY_SOURCES
#    ${PROJECT_DIR}/graphics/Example.cpp
#)

# Construção do executável
add_executable(WeirdoSandbox 
    ${PROJECT_DIR}/core/main.cpp
    ${GRAPHICS_SOURCES}
)