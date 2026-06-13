#include<iostream>
using namespace std;

void countEvenOdd(int a[],int n)
{
    int even=0;
    int odd=0;
    //count even and odd
    for(int i=0;i<n;i++){
        if(a[i]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd;
}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the element of array : ";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    countEvenOdd(a,n);
}