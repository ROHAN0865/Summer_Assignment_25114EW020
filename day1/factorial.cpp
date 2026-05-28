#include<iostream>
using namespace std;

int main()
{
    long long int i,a=1,n;
    cout<<"enter the number to find factorial of\n";
    cin>>n;
    for(i=1;i<=n;i++){
        a=a*i;
    }
    cout<<a;

}