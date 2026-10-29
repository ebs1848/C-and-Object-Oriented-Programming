#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int rows;
    int columns;
    vector<vector<int>> data;

public:
    
    Matrix(int numRows, int numCols) : rows(numRows), columns(numCols), data(numRows, vector<int>(numCols, 0)) {}

    Matrix() : rows(0), columns(0) {}

    void setElement(int i, int j, int value) {
        if (i >= 0 && i < rows && j >= 0 && j < columns) {
            data[i][j] = value;
        } else {
            cout << "Invalid position\n";
        }
    }

    Matrix addMatrix(const Matrix& other) const {
        if (rows != other.rows || columns != other.columns) {
            cout << "Matrices must have the same dimensions for addition.\n";
            return Matrix();
        }

        Matrix result(rows, columns);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix multiplyMatrix(const Matrix& other) const {
        if (columns != other.rows) {
            cout << "The number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication.\n";
            return Matrix();
        }

        Matrix result(rows, other.columns);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.columns; ++j) {
                for (int k = 0; k < columns; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    void displayMatrix() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << data[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    int rows1, columns1, rows2, columns2;

    cout << "Enter the number of rows for Matrix 1: ";
    cin >> rows1;
    cout << "Enter the number of columns for Matrix 1: ";
    cin >> columns1;

    Matrix matrix1(rows1, columns1);

    cout << "Enter the elements for Matrix 1:\n";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns1; ++j) {
            int element;
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> element;
            matrix1.setElement(i, j, element);
        }
    }

    cout << "Enter the number of rows for Matrix 2: ";
    cin >> rows2;
    cout << "Enter the number of columns for Matrix 2: ";
    cin >> columns2;

    Matrix matrix2(rows2, columns2);

    cout << "Enter the elements for Matrix 2:\n";
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < columns2; ++j) {
            int element;
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> element;
            matrix2.setElement(i, j, element);
        }
    }

    cout << "\nMatrix 1:\n";
    matrix1.displayMatrix();

    cout << "\nMatrix 2:\n";
    matrix2.displayMatrix();

    cout << "\nMatrix Addition:\n";
    Matrix additionResult = matrix1.addMatrix(matrix2);
    additionResult.displayMatrix();

    cout << "\nMatrix Multiplication:\n";
    Matrix multiplicationResult = matrix1.multiplyMatrix(matrix2);
    multiplicationResult.displayMatrix();

    return 0;
}

