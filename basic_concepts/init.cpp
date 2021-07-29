#include <unsupported/Eigen/CXX11/Tensor>
#include <iostream>

int main(int argc, char** argv){
    Eigen::Tensor<float, 2> a(2, 3);
    a.setConstant(100);
    
    a.setValues({{1}, {2}});
    std::cout << a << std::endl;
    
    // 这个其实就是 transpose 嘛。shuffle_axis
    Eigen::Tensor<float, 2> b(3, 2);
    Eigen::array<int, 2> perm {1, 0};
    b.shuffle(perm) = a;
    std::cout << b << std::endl;
    
    return 0;
}
