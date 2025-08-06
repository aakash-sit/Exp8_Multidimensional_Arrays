// Aakash Choudhari
// E&TC-A2
// 24070123031 

#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for Matrix B: ";
    cin >> r2 >> c2;

    // Correct condition: Columns of A == Rows of B
    if (c1 != r2) {
        cout << "\nMultiplication not possible. Columns of Matrix A must equal rows of Matrix B.\n";
        return 0;
    }

    int A[10][10], B[10][10], product[10][10] = {0};

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMatrix A:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatrix B:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nProduct of A * B:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << product[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
