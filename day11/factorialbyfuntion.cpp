#include<iostream>
using namespace std;
//factorial of a number by function
int fact(int a){
    int ans=1;
    while(a>0){
     ans=ans*a;
     a--;
    }
    cout<<ans;
}
int main()
{
    fact(5);
    cout<<endl;
    fact(12);
}