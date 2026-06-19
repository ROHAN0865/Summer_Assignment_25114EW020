#include <iostream>
using namespace std;

void input(int a[][10], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
}

void transpose(int a[][10], int r, int c) {
    cout << "Transpose Matrix:\n";

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[10][10];

    cout << "Enter matrix:\n";
    input(a, r, c);

    transpose(a, r, c);

    return 0;
}