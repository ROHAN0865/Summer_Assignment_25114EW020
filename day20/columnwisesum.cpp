#include <iostream>
using namespace std;
//input funtion
void input(int a[10][10], int r, int c) {
    cout<<"enter the element of matrix: ";
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> a[i][j];
        }
    }
}
//column wise summation funtion
void columnSum(int a[10][10], int r, int c) {
    for(int j=0;j<c;j++) {
        int sum = 0;

        for(int i=0;i<r;i++) {
            sum += a[i][j];
        }

        cout << "Column " << j + 1 << " Sum = " << sum << endl;
    }
}

int main() {
    int r,c;
    cout <<"enter no. of rows and columns: ";
    cin >> r >> c;
    int a[10][10];
    input(a,r,c);
    columnSum(a,r,c);
    return 0;
}