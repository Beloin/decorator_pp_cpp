cmake_minimum_required(VERSION 3.20)
project(decorator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

file(GLOB SOURCES "decorators/*.cpp" "decorators/*.h")

add_executable(decorator
        DefaultBottle.cpp
        DefaultBottle.h
        BottleProtocol.h
        main.cpp
        ${SOURCES}
        )
