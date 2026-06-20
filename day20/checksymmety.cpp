#include <iostream>
using namespace std;
//matrix input funtion
void input(int a[10][10], int r) {
    cout<<"enter the element of matrix: ";
    for(int i=0;i<r;i++) {
        for(int j=0;j<r;j++) {
            cin >> a[i][j];
        }
    }
}
//funtion to check symmetry
void checkSymmetric(int a[10][10], int r) {
    bool symmetric = true;

    for(int i=0;i<r;i++) {
        for(int j=0;j<r;j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = false;
            }
        }
    }

    if(symmetric)
        cout << "symmetric matrix";
    else
        cout << "not symmetric matrix";
}

int main() {
    int r,c;
    cout<<"enter row and column: ";
    cin >> r>>c;
    if(r!=c){
        cout<<"not symmetric matrix: ";
    }else
    {
      int a[10][10];

     input(a,r);

     checkSymmetric(a,r);
     }

    return 0;
}