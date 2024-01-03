#include <iostream>
#include <vector>

vector<vector<int>> addMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int rows2 = matrix2.size();
    int cols2 = matrix2[0].size();

    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Invalid matrix addition: Matrices must have the same dimensions." << endl;
        return {};
    }
    vector<vector<int>> result(rows1, vector<int>(cols1, 0));

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    return result;
}

vector<vector<int>> subtractMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int rows2 = matrix2.size();
    int cols2 = matrix2[0].size();

    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Invalid matrix subtraction: Matrices must have the same dimensions." << endl;
        return {};
    }

    vector<vector<int>> result(rows1, vector<int>(cols1, 0));

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    return result;
}

vector<vector<int>> multiplyMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int rows2 = matrix2.size();
    int cols2 = matrix2[0].size();

    if (cols1 != rows2) {
        cout << "Invalid matrix multiplication: Number of columns in matrix1 must be equal to the number of rows in matrix2." << endl;
        return {};
    }

    vector<vector<int>> result(rows1, vector<int>(cols2, 0));

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

vector<vector<double>> inverseMatrix(const vector<vector<int>>& mat) {
    int size = mat.size();
    vector<vector<double>> augmentedMatrix(size, vector<double>(2 * size, 0));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            augmentedMatrix[i][j] = mat[i][j];
            augmentedMatrix[i][j + size] = (i == j) ? 1 : 0;
        }
    }

    for (int i = 0; i < size; i++) {
        double pivot = augmentedMatrix[i][i];

        for (int j = 0; j < 2 * size; j++) {
            augmentedMatrix[i][j] /= pivot;
        }

        for (int k = 0; k < size; k++) {
            if (k != i) {
                double factor = augmentedMatrix[k][i];
                for (int j = 0; j < 2 * size; j++) {
                    augmentedMatrix[k][j] -= factor * augmentedMatrix[i][j];
                }
            }
        }
    }

    // extract the inverse matrix 
    vector<vector<double>> inverse(size, vector<double>(size, 0));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            inverse[i][j] = augmentedMatrix[i][j + size];
        }
    }

    return inverse;
}

// minor calculate
vector<vector<int>> minorMatrix(const vector<vector<int>>& mat, int row, int col) {
    int rows = mat.size();
    int cols = mat[0].size();

    vector<vector<int>> minor(rows - 1, vector<int>(cols - 1));

    for (int i = 0, r = 0; i < rows; ++i) {
        if (i == row) {
            continue; 
        }

        for (int j = 0, c = 0; j < cols; ++j) {
            if (j == col) {
                continue; 
            }

            minor[r][c++] = mat[i][j];
        }

        ++r;
    }

    return minor;
}

using namespace std;
int main() {

  
      return 0;
}
