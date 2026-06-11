#include<iostream>
using namespace std;

int main()
{
 int a,n,key=0;
 cout<<"enter the number\n  " ;
 cin>>n;
 while(n!=0){
  n=n/10;
  key++;
 }
 cout<<"degits = " <<key;
}