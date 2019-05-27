cmake_minimum_required(VERSION 2.8)

set(HEADERS headers/Stack.h headers/Wrap.h)
set(SOURCES src/main.cpp src/Stack.cpp src/Wrap.cpp)

add_executable(main ${HEADERS} ${SOURCES})
