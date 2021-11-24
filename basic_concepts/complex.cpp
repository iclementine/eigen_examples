#include <iostream>
#include <complex>
#include <unsupported/Eigen/CXX11/Tensor>

int main(){
    Eigen::Tensor<std::complex<float>, 2> a(2, 2);
    a.setRandom();
    std::cout << "a:\n" << a << std::endl;
    
    auto r = a.abs();
    // 使用一个 lambda 或者 functor 来计算 Eigen 没有预定义的 unaryExpr
    // 这比用 for_range 之类的更优雅啊
    auto theta = a.unaryExpr(
        [](auto x){
            return std::arg(x);
        }
    );
    
    // eigen 还可以使用 nullaryExpr, unaryExpr, binaryExpr
    // 不过并没有 tenaryExpr, 而只有 select
    
    std::cout << "magitude:\n" << r << std::endl;
    std::cout << "angle:\n" << theta << std::endl;
    return 0;
}
