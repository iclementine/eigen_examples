#include <unsupported/Eigen/CXX11/Tensor>
#include <iostream>

int main(int argc, char** argv){
    Eigen::Tensor<float, 2> a(2, 3);
    a.setConstant(100);
    
    a.setValues({{1, 2}, {2}});
    std::cout << "Tensor a:\n" << a << std::endl;
    
    // 这个其实就是 transpose 嘛。shuffle_axis
    // 使用 Eigen::Index 是更加 native 的用法，它其实就是 std::ptrdiff_t
    Eigen::Tensor<float, 2> b(3, 2);
    Eigen::array<Eigen::Index, 2> perm {1, 0}; 
    b.shuffle(perm) = a;
    std::cout << "transposed:\n" << b << std::endl;
    
    return 0;
}
