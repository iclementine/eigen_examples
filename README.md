# eigen_examples
learn eigen and use eigen in examples

Keep in mind that Eigen's Tensor (and alot of other array libraries in c++) make number of dimensions a template parameter, which means:

1. it is a part of the type of a tensor;
2. the rank should be known at compile time;
3. a lot of functions requires shape or axis to be an array rather than a vector, the size of them should also known at compile time, thus enbles inference of the return type, or otherwise, the return type is not clear;
4. known number of dimensionality at compile time makes it possible to store shape, stride on the stack rather than on the heap.
