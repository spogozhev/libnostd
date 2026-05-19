cmake_minimum_required(VERSION 3.14)

project(examples)

set(CMAKE_CXX_STANDART 20)

include_directories(../include)

#add_executable(
#	ex01
#	example-01.cpp
#	../src/libnostd.cpp
#	../src/math/core.cpp
#	../src/math/statistics.cpp
#)

add_executable(ex01 example-01.cpp)
target_link_libraries(
	ex01
	libnostd
)

add_executable(ex02 example-02.cpp)
target_link_libraries(
    ex02
    libnostd
)

add_executable(ex03 example-03.cpp)
target_link_libraries(
    ex03
    libnostd
)
