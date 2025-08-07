// Aakash Choudhari
// E&TC-A2
// 24070123031

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    if (rows < 2) {
        cout << "Matrix should have at least two rows to compare." << endl;
        return 0;
    }

    int matrix[100][100];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];

    bool areSame = true;
    for (int j = 0; j < cols; ++j) {
        if (matrix[0][j] != matrix[1][j]) {
            areSame = false;
            break;
        }
    }

    if (areSame)
        cout << "First row and second row are the same." << endl;
    else
        cout << "First row and second row are different." << endl;

    return 0;
}
