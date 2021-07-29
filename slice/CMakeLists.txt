cmake_minimum_required (VERSION 3.0)
project (myproject)

set(CMAKE_CXX_FLAGS "-std=c++14")
find_package (Eigen3 3.3 REQUIRED NO_MODULE)
 
add_executable (example main.cc)
target_link_libraries (example Eigen3::Eigen)
