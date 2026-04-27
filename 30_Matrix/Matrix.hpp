#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T>
class Matrix {
public:
    Matrix(int r = 1, int c = 1);

    // to do
    ~Matrix();

    Matrix(const Matrix<T>& other);

    Matrix<T>& operator=(const Matrix<T>& other);
    Matrix<T>& operator+(const Matrix<T>& other); // should throw exception if rows and cols don't match (add element by element)



    
    static Matrix<T> load(const char* filename);

    void print() const;

private:
    int rows, cols;
    T** data;
};

#include "Matrix.tpp"





#endif