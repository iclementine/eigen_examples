cmake_minimum_required(VERSION 3.0)

project(basic_concepts)


set(CMAKE_CXX_FLAGS "-std=c++14")
find_package (Eigen3 3.3 REQUIRED NO_MODULE)

add_executable(layout layout.cpp)
# 原来这是所谓的接口库，尽管它只是包含头文件，但是你可以这么写，
# 而不是显示指定头文件
target_link_libraries (layout Eigen3::Eigen)


add_executable(tensorref tensorref.cpp)
target_link_libraries (tensorref Eigen3::Eigen)

add_executable(contraction contraction.cpp)
target_link_libraries (contraction Eigen3::Eigen)

add_executable(init init.cpp)
target_link_libraries (init Eigen3::Eigen)

install(TARGETS layout tensorref init contraction RUNTIME DESTINATION bin)
