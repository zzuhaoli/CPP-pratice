cmake_minimum_required(VERSION 3.0)
project(student_teacher)

set(SRC_LIST classinfo.cc student.cc teacher.cc) 
include_directories(${CMAKE_SOURCE_DIR})
add_library(stu_tea_info SHARED ${SRC_LIST})
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

