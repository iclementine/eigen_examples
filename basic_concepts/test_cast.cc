#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main(){
    Eigen::Tensor<float, 2> a(6, 6);
    a.setRandom();
    std::cout << a.dimensions() << std::endl;

    Eigen::Tensor<double, 2> b(6, 6);
    b.setConstant(static_cast<double>(1.0));

    // if you add a float Tensor to a double Tensor
    // it would cause an error
    auto c = a.cast<double>() + b;
    std::cout << "a + b:\n" << c << std::endl;

    auto d = a.cast<double>();

    std::cout << "a.cast<double>:\n" << d << std::endl;
    return 0;

}
