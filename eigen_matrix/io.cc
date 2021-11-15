#include <iostream>
#include <Eigen/Dense>

void advanced_init(){
	Eigen::MatrixXd M(4, 4);
	Eigen::Matrix2d N1;
	N1 << 2, 3, 4, 5;
	Eigen::Matrix2d N2;
	N2 << 1, 0, 0, 1;

	M << N1, N2, N2, N1;
	std::cout << "Matrix M: \n" << M << std::endl;
}

int static_methods(){
	{
	// static method
		Eigen::MatrixXd M = Eigen::MatrixXd::Constant(2, 3, 1.9);
		std::cout << "Matrix M: \n" << M << std::endl;
	}
	{
	// static method
		Eigen::MatrixXd M = Eigen::MatrixXd::Zero(2, 3);
		std::cout << "Matrix M: \n" << M << std::endl;
	}
	{
		Eigen::MatrixXd M = Eigen::MatrixXd::Random(2, 3);
		std::cout << "Matrix M: \n" << M << std::endl;
	}
	{
		Eigen::VectorXd v = Eigen::VectorXd::LinSpaced(5, 0, 20);
		std::cout << "vector v: \n" << v << std::endl;
	}
	return 0;
}

int main(){
	std::cout << "Chapter 02" << std::endl;
	advanced_init();
	static_methods();
	return 0;
}
