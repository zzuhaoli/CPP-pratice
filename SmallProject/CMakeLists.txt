cmake_minimum_required(VERSION 3.0)
project(man)

aux_source_directory(${CAMKE_CURRENT_SOURCE_DIR}/source SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(path ${CMAKE_SOURCE_DIR})
set(EXECUTABLE_OUTPUT_PATH ${path})

add_executable(main ${SRC})
