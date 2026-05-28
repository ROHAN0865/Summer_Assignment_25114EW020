#include<iostream>
using namespace std;
int main() 
{
    int n,i,sum=0;
    //take input of n(upto number to be summed)
    cout<<"enter the number upto sum \n";
    cin>>n;
    for(i=1;i<=n;i++){
       sum=sum+i;
    }
    cout<<"sum of of n natural number =" <<sum;
}