#include <iostream>
using namespace std;
//funtion for input of array
void input(int a[10][10], int r, int c) {
    cout<<"enter the element of matrix: ";
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> a[i][j];
        }
    }
}
//funtion for multiplication of two array
void multiply(int a[10][10], int b[10][10], int r1, int c1, int c2) {
    int mul[10][10];

    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            mul[i][j] = 0;

            for(int k=0;k<c1;k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    //output matrix
    cout << "Result Matrix:\n";
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r1,c1,r2,c2;
    cout<<"enter the row and column of first matrix: ";
    cin >> r1 >> c1;
    cout<<"enter the row and column of second matrix: ";
    cin >> r2 >> c2;
    if(c1 != r2) {
        cout << "Multiplication not possible";
        return 0;
    }
    int a[10][10], b[10][10];
    input(a,r1,c1);
    input(b,r2,c2);
    multiply(a,b,r1,c1,c2);
    return 0;
}