#include<iostream>
using namespace std;

int main()
{
    int i=0,n,b=1,a=0,c;
    cout<<"enter the term upto which u want to print fibonachi series ";
    cin>>n;
    cout<<a <<'\t' <<b<<"\t";
    for(int i=0;i<n-2;i++){
        c=a+b;
        cout<<c <<"\t";
        a=b;
        b=c;
    }
}