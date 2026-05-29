#include<iostream>
using namespace std;

int main()
{
 int a,n,rev=0;
 cout<<"enter the number to be reversed\n";
 cin>>n;
  while(n!=0){
    a=n%10;
    rev=rev*10+a;
    n=n/10;
  }
 cout<<"the reversed number = " <<rev ;
}