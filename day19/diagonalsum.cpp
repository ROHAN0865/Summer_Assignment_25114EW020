#include <iostream>
using namespace std;

void input(int a[][10], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

int diagonalSum(int a[][10], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[10][10];

    cout << "Enter matrix:\n";
    input(a, n);

    cout << "Diagonal Sum = " << diagonalSum(a, n);

    return 0;
}