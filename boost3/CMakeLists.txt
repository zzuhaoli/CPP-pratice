cmake_minimum_required(VERSION 3.0)
project(boost2)

set(SRC main.cpp options.cpp person.cpp)
include_directories(${PROJECT_SOURCE_DIR})

set(_acts_boost_version 1.71.0)
find_package(Boost ${_acts_boost_version} REQUIRED COMPONENTS program_options)


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
add_executable(main ${SRC})
target_link_libraries(main PRIVATE Boost::program_options)


