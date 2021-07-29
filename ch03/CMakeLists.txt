cmake_minimum_required (VERSION 3.0)
project (myproject)

set(CMAKE_CXX_FLAGS "-std=c++14")
find_package (Eigen3 3.3 REQUIRED NO_MODULE)
 
add_executable (example main.cc)
# 原来这是所谓的接口库，尽管它只是包含头文件，但是你可以这么写，
# 而不是显示指定头文件
target_link_libraries (example Eigen3::Eigen)
