cmake_minimum_required(VERSION 3.10)
project(SineArray)

# Опция для выбора типа данных
option(USE_FLOAT "Build with float array" ON)

if(USE_FLOAT)
    add_definitions(-DUSE_FLOAT)
else()
    add_definitions(-DUSE_DOUBLE)
endif()

add_executable(sine_array main.cpp)
