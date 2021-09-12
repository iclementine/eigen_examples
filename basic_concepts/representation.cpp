#include <iostream>
#include <algorithm>
#include <unsupported/Eigen/CXX11/Tensor>

int main(){
    // 其实这里的目的是想要说明，现在超过 2D 的 Eigen Tensor 也能打印了
    // 不过，你需要看清 Eigen::Tensor 默认的 Fortran Layout, 这就非常的学究气
    Eigen::Tensor<int, 3> a(3, 3, 3);
    
    // size 是元素个数
    std::cout << "a's size" << a.size() << std::endl;
    
    // 和标准库的 vector 类似，也提供了 data 方法，返回指向存储区的 T* pointer
    // 于是乎我们也可以用标准库中的算法来对它的数据区进行操作， 比如说 iota
    // 不同数组库之间的互操作性是很重要的。
    std::iota(a.data(), a.data() + a.size(), 0);
    std::cout << "3D Tensor a:\n" << a << std::endl;
    
    Eigen::Tensor<int, 3, Eigen::RowMajor> b(3, 3, 3);
    std::iota(b.data(), b.data() + b.size(), 0);
    std::cout << "3D Tensor b:\n" << b << std::endl;
    return 0;
}
