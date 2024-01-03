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

using namespace std;
int main() {

  
      return 0;
}
