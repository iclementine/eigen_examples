#include <unsupported/Eigen/CXX11/Tensor>
#include <algorithm>
#include <iostream>

int main(){
    Eigen::Tensor<float, 1> buffer(24);
    std::iota(buffer.data(), buffer.data() + buffer.size(), 0);
    std::cout << buffer << std::endl;
    
    Eigen::DSizes<size_t, 3> new_shape {2, 3, 4};
    auto space = buffer.reshape(new_shape);
    std::cout << space << std::endl;
    
    auto reduce0 = space.sum(Eigen::array<int, 1>{0});
     std::cout << reduce0 << std::endl;
    
    return 0;
    
}
