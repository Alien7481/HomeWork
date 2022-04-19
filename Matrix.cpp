#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using std::cout;


int** createMatrix(int rows, int cols) {
    int** matrix = new int* [rows];

    matrix[0] = new int[rows * cols]{};
    for (int i = 1; i < rows; i++) {
        matrix[i] = matrix[i - 1] + cols;
    }

    return matrix;
}

void fill_matrix(int* matrix[], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < rows; j++)
            matrix[i][j] = rand() % 10;
}


void print(int* matrix[], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

void destroyMatrix(int* matrix[]) {
    delete[] matrix[0];
    delete[] matrix;
}
