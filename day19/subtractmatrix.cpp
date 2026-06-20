#include <iostream>
using namespace std;

void input(int a[][10], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
}

void subtract(int a[][10], int b[][10], int r, int c) {
    cout << "Subtraction of matrices:\n";

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << a[i][j] - b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[10][10], b[10][10];

    cout << "Enter first matrix:\n";
    input(a, r, c);

    cout << "Enter second matrix:\n";
    input(b, r, c);

    subtract(a, b, r, c);

    return 0;
}