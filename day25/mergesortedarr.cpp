#include <iostream>
using namespace std;

void mergeArray(int a[], int b[], int n1, int n2){
    int c[n1 + n2];
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2){
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    cout << "merged array: ";
    for(i = 0; i < n1 + n2; i++)
        cout << c[i] << " ";
}

int main(){
    int n1, n2;
    cout << "enter size of first array: ";
    cin >> n1;
    int a[n1];
    cout << "enter elements: ";
    for(int i = 0; i < n1; i++)
        cin >> a[i];
    cout << "enter size of second array: ";
    cin >> n2;
    int b[n2];
    cout << "enter elements: ";
    for(int i = 0; i < n2; i++)
        cin >> b[i];
    mergeArray(a, b, n1, n2);
    return 0;
}