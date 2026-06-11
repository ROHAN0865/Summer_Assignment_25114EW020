#include<iostream>
using namespace std;

int main()
{
   int n,a,sum=0;
   cout<<"enter number to sum the digits\n";
   cin>>n;
   while(n!=0){
    a=n%10;
    sum=sum+a;
    n=n/10;
   } 
   cout<<"sum of digits of number = " <<sum;
}