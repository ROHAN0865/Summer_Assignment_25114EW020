#include<iostream>
using namespace std;

int main()
{
    int a,n,product=1;
    cout<<"enter the number to find product of digits\n";
    cin>>n;
    while(n!=0){
        a=n%10;
        product=product*a;
        n=n/10;
    }
cout<<"product of digits = " <<product;
}