#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>
int main(int argc, char **argv) {
    /* 值得注意的是，永远留意 1d array 的形式。swap.layout 返回的是一个 TensorSwapLayoutOp
     * 但是把它赋值给一个 RowMajor 的 Tensor 就可以求值。
     * 原本的 dimensions 是 [2, 4], 但是转换布局之后形状就是 row major 的 [4, 2]
     * 总之 stride 原来是 [1, 2], 转换布局之后是 [2, 1]
     */
    Eigen::Tensor<float, 2> col_major(2, 4);
    col_major.setRandom();
    std::cout<< "col_major tensor's shape: " << col_major.dimensions() << std::endl;
    std::cout << "col_major:\n" << col_major << std::endl;
    
    Eigen::Tensor<float, 2, Eigen::RowMajor> row_major = col_major.swap_layout();
    std::cout<< "row_major tensor's shape: " << row_major.dimensions() << std::endl;
    std::cout << "row_major:\n" << row_major << std::endl;
    
    // 这一套是仅仅改变数据布局但是保持形状的方式。
    Eigen::array<Eigen::Index, 2> perm {1, 0};
    Eigen::Tensor<float, 2, Eigen::RowMajor> row_major2 = col_major.swap_layout().shuffle(perm);
    std::cout<< "row_major2 tensor's shape: " << row_major2.dimensions() << std::endl;
    std::cout << "row_major2:\n" << row_major2 << std::endl;
    
    return 0;
}
