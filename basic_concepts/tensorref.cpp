#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main(int argc, char** argv) {
    Eigen::Tensor<float, 2> t1(2, 3);
    Eigen::Tensor<float, 2> t2(2, 3);
    t1.setRandom();
    t2.setRandom();
    std::cout << t1 << std::endl;
    std::cout << t2 << std::endl;
    
    // 这是一个 TensorCWiseAddOp, 但是它并不能像 Tensor 那样 index 求值
    // auto sum = t1 + t2;
    // std::cout << sum(0, 0) << std::endl;
    
    // 但是 TensorRef 可以对 Operation 进行包装
    Eigen::TensorRef<Eigen::Tensor<float, 2>> sum = t1 + t2;
    std::cout << sum(0, 0) << std::endl;
    
    return 0;
    
}
