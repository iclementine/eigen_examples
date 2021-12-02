#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

template <typename T, typename A>
auto func(const T& input, const A& axes){
    auto temp = input.sum(axes);
    auto result = temp * temp;
    return result;
}


int main(){
    Eigen::Tensor<float, 2> a(2, 2);
    a.setValues({{1, 2}, {3, 4}});
    std::cout << "a:\n" << a << std::endl;
    Eigen::array<int, 1> axes {0};
    auto x = func(a, axes);
    std::cout << "x:\n" << x << std::endl;
    return 0;
}
