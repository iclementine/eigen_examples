#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main(){
    Eigen::Tensor<double, 2> a(1, 6);
    a.setRandom();
    std::cout << "a:\n" << a << std::endl;

    Eigen::Tensor<double, 2> b(6, 1);
    b.setConstant(static_cast<double>(1.0));
    std::cout << "b:\n" << b << std::endl;

    // Eigen's broadcast as a different meaning than numpy
    // the argument should be a array containing copy times at each dimension.
    auto c = a.broadcast(Eigen::array<Eigen::Index, 2>({6, 1}))\
           + b.broadcast(Eigen::array<Eigen::Index, 2>({1, 6}));
    std::cout << "a + b:\n" << c << std::endl;
    return 0;

}
