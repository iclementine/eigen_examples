#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main(int argc, char** argv){
    Eigen::Tensor<float, 3> a(2, 3, 4);
    Eigen::Tensor<float, 3> b(4, 3, 5);
    a.setConstant(1.0f);
    b.setConstant(2.0f);
    
    Eigen::array<Eigen::IndexPair<int>, 2> product_dims = { 
        Eigen::IndexPair<int>(2, 0),
        Eigen::IndexPair<int>(1, 1),
    };
    Eigen::Tensor<float, 2> c = a.contract(b, product_dims);
    std::cout << "c dimensions:" << c.dimensions() << std::endl;
    std::cout << c << std::endl;
    
    Eigen::array<Eigen::IndexPair<int>, 3> all_product_dims = { 
        Eigen::IndexPair<int>(0, 0),
        Eigen::IndexPair<int>(1, 1),
        Eigen::IndexPair<int>(2, 2),
    };
    Eigen::Tensor<float, 0> d = a.contract(a, all_product_dims);
    std::cout << "d dimensions:" << d.dimensions() << std::endl;
    std::cout << d << std::endl;
    
    int x = d();
    std::cout << "the only coefficient in d: " << x << std::endl;
    
    return 0;
}
