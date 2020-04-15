cmake_minimum_required(VERSION 3.1)

project(FindPermutation)

set(FIND_PERMUTATION_SRC main.cpp FindPermutation.cpp)
set(FIND_PERMUTATION_HDR FindPermutation.hpp)

#add_library(vector STATIC ${VECTOR_SRC} ${VECTOR_HDR})
add_executable(${PROJECT_NAME} ${FIND_PERMUTATION_SRC} ${FIND_PERMUTATION_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")