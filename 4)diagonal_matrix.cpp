// Aakash Choudhari
// E&TC-A2
// 24070123031 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of square matrix (n x n): ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    int mainDiagonal = 0, secondaryDiagonal = 0;

    for (int i = 0; i < n; ++i) {
        mainDiagonal += matrix[i][i];
        secondaryDiagonal += matrix[i][n - i - 1];
    }

    cout << "Sum of main diagonal = " << mainDiagonal << endl;
    cout << "Sum of secondary diagonal = " << secondaryDiagonal << endl;

    return 0;
}
