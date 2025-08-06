// Aakash Choudhari
// E&TC-A2
// 24070123031 
#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter number of rows and columns for first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter number of rows and columns for second matrix: ";
    cin >> rows2 >> cols2;

    if (rows1 != rows2 || cols1 != cols2) {
        cout << "\nAddition not possible. Matrix dimensions do not match." << endl;
        return 0;
    }

    int A[10][10], B[10][10], sum[10][10];

    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }

    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }

    cout << "\nMatrix A:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatrix B:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSum of Matrix A and B:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
