#include <iostream>
#include <Eigen/Dense>
#include <unsupported/Eigen/CXX11/Tensor>

int main(){
    Eigen::Tensor<float, 2> a(10, 10);
    a.setRandom();
    std::cout << a << std::endl;

    Eigen::array<long int, 2> starts {0, 0};
    Eigen::array<long, 2> stops {10, 10};
    Eigen::array<long, 2> strides {2, 2};

    auto b = a.stridedSlice(starts, stops, strides);
    std::cout << b << std::endl;
    return 0;
}