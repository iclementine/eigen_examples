cmake_minimum_required(VERSION 3.10)
project(basic_concepts)

add_executable(layout layout.cpp)
target_link_libraries (layout Eigen3::Eigen)


add_executable(tensorref tensorref.cpp)
target_link_libraries (tensorref Eigen3::Eigen)

add_executable(contraction contraction.cpp)
target_link_libraries (contraction Eigen3::Eigen)

add_executable(init init.cpp)
target_link_libraries (init Eigen3::Eigen)

add_executable(representation representation.cpp)
target_link_libraries (representation Eigen3::Eigen)

add_executable(slice slice.cc)
target_link_libraries (slice Eigen3::Eigen)


add_executable(reduction reduction.cpp)
target_link_libraries (reduction Eigen3::Eigen)

add_executable(test_cast test_cast.cc)
target_link_libraries (test_cast Eigen3::Eigen)

add_executable(broadcast broadcast.cc)
target_link_libraries (broadcast Eigen3::Eigen)

add_executable(complex complex.cpp)
target_link_libraries (complex Eigen3::Eigen)

add_executable(function function.cc)
target_link_libraries (function Eigen3::Eigen)
