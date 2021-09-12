cmake_minimum_required(VERSION 3.10)
project(eigen_matrix)

add_executable(construction construction.cc)
target_link_libraries (construction Eigen3::Eigen)


add_executable(io io.cc)
target_link_libraries (io Eigen3::Eigen)

