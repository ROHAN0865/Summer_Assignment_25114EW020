#include <iostream>
using namespace std;
//input funtion
void input(int a[10][10], int r, int c) {
    cout<<"enter the element ";
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> a[i][j];
        }
    }
}
//funtion for sum of row
void rowSum(int a[10][10], int r, int c) {
    for(int i=0;i<r;i++) {
        int sum = 0;

        for(int j=0;j<c;j++) {
            sum += a[i][j];
        }

        cout << "Row " << i + 1 << " Sum = " << sum << endl;
    }
}

int main() {
    int r,c;
    cout<<"enter no. of rows and columns";
    cin >> r >> c;
    int a[10][10];
    input(a,r,c);
    rowSum(a,r,c);
    return 0;
}