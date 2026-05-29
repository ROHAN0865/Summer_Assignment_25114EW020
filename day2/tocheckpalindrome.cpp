#include<iostream>
using namespace std;

int main()
{
   int a,n,rev=0;
 cout<<"enter the number to be check for palindrome\n";
 cin>>n;
 int original=n;
  while(n!=0){
    a=n%10;
    rev=rev*10+a;
    n=n/10;
  }
 if(rev==original){
    cout<<"the given number is palindrome ";
 }
 else{
    cout<<"given number is not a palindrome ";
 }
}