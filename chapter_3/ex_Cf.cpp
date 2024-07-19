/* Declare	a	structure	called	matrix	containing	a	3	x	3	array	of integers.	
Overload	the	+	operator	to	carry	out	addition	of	two matrices.*/
#include <iostream>

// Structure definition for a 3x3 matrix
struct Matrix {
    int mat[3][3];

    // Overload the + operator to add two matrices
    Matrix operator+(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                result.mat[i][j] = this->mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    // Function to display the matrix
    void display() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix mat1 = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
    Matrix mat2 = {{{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}};

    Matrix result = mat1 + mat2;

    std::cout << "Matrix 1:" << std::endl;
    mat1.display();

    std::cout << "Matrix 2:" << std::endl;
    mat2.display();

    std::cout << "Result of Matrix 1 + Matrix 2:" << std::endl;
    result.display();

    return 0;
}

