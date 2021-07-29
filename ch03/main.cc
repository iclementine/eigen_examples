#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main(){
	std::cout << "Chapter 03" << std::endl;
    Eigen::Tensor<double, 2> t(3, 4);
    t.setRandom();
    std::cout << t << std::endl;
	return 0;
}
