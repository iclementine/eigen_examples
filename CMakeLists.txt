cmake_minimum_required(VERSION 3.10)
project(eigen_practice)

set(CMAKE_CXX_FLAGS "-std=c++14")
find_package (Eigen3 3.4 REQUIRED NO_MODULE)
add_subdirectory(basic_concepts)
add_subdirectory(eigen_matrix)

