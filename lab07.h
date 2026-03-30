#ifndef MATRIX_H
#define MATRIX_H

#include <string>
using namespace std;

const int SIZE = 4; // Global constant for matrix size

class Matrix {
private:
    int data[SIZE][SIZE]; // 2D array for matrix data

public:
    // 1. Read values from a file into the matrix
    void readFromStdin(const string& filePath);

    // 2. Display the matrix
    void display() const;

    // 3. Add two matrices
    Matrix operator+(const Matrix& other) const;

    // 4. Multiply two matrices
    Matrix operator*(const Matrix& other) const;

    // 5. Compute the sum of matrix diagonal elements
    int sumOfDiagonals() const;

    // 6. Swap two rows of the matrix
    void swapRows(int row1, int row2);
};

#endif // MATRIX_H