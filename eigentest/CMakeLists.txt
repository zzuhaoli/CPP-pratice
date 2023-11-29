cmake_minimum_required(VERSION 3.0)
project(eigen)

set(_acts_eigen3_version 3.3.7)
#find_package(Eigen3 ${_acts_eigen3_version} REQUIRED COMPONENTS Core)
find_package(Eigen3 ${_acts_eigen3_version} REQUIRED)
add_executable(main eigen.cpp)
target_link_libraries(main Eigen3::Eigen)

