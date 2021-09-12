#include <iostream>
#include <Eigen/Dense>

int create_vector(){
    std::cout << "Create a Vector" << std::endl;
    // 3D vector of double
    // 這種 fixed_size 的 vector 是可以直接把元素寫在裡面的
    // 但是這種只有 1 到 4 的 size
    // 再大的你就應該用 VectorX 之類的了
    // 另外， Vector 就是只有一列的 Matrix
    // 沒有通用的 Vector 類，只有通用的 Matrix 類
    Eigen::Vector3d a(1, 2, 3);
    std::cout << "vector: \n"<< a << std::endl;
    return 0;
}

int create_dynamic_vector(){
    std::cout << "Create a Vector:" << std::endl;
    // 3D vector of double
    // 動態的 VectorX.. 參數是 size 而不是內容哦
    Eigen::VectorXd a(4);
    a << 1, 2, 3, 4;
    std::cout << "vector: \n" << a << std::endl;

    Eigen::VectorXd b(3);
    b.setConstant(7.0);
    std::cout << "vector: \n" << b << std::endl;
    return 0;
}

int create_matrix(){
    std::cout << "Create a Matrix" << std::endl;
    Eigen::Matrix3d M;
    // Eigen::Matrix3d M(3, 3); 也可以這麼寫，但是沒有必要
    // Matrix 沒有直接把元素寫在 Constructor 的寫法。用下面的寫法
    M << 1,2,3,4,5,6,7,8,9; 
    std::cout << "Matrix: \n"<< M << std::endl;
    return 0;
}

int create_dynamic_matrix(){
    std::cout << "Create a Matrix" << std::endl;
    Eigen::MatrixXd M(2, 3);
    // Eigen::Matrix3d M(3, 3); 也可以這麼寫，但是沒有必要
    // Matrix 沒有直接把元素寫在 Constructor 的寫法。用下面的寫法
    M << 1,2,3,4,5,6; 
    std::cout << "Matrix: \n"<< M << std::endl;
    return 0;
}

int main(){
    std::cout << "Hello, Eigen!" << std::endl;
    create_vector();
    create_dynamic_vector();

    create_matrix();
    create_dynamic_matrix();
    return 0;
}