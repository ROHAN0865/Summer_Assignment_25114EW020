#include<iostream>
using namespace std;
//check prime using function
void prime(int a){
    int key=0;
    if( a == 0 || a==1){
       cout<<"->its not prime";
    }
    else{
     for(int i=2;i<a;i++){
        if( a %i==0){
           key++;
        }
     }
     if(key==0){
        cout<<"->its prime ";
     }
     else{
        cout<<"->its not prime ";
     }
    }
}
int main()
{    
    int n;
    cout<<"ENTER NUMBER :";
    cin>>n;
    prime(n);
}