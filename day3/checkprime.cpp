#include<iostream>
using namespace std;

int main()
{
  int n,a=2,key=0; 
  cout<<"enter the to be check ";
  cin>>n;
  //0 and 1 are not prime number 
  if(n<=1)
    cout<<"it is not a prime number" ;
    else{
  for(a=2;a<n;a++){
    if(n%a==0){
       key++;
    }
  }  
  if(key!=0){
    cout<<"it is not a prime number";

  }else{
    cout<<"it is a prime number" ;
  }
}
}