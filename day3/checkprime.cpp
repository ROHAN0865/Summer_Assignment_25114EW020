#include<iostream>
using namespace std;

int main()
{
  int n,a=2,key=0; //0 and 1 are not prime number 
  cout<<"enter the to be check ";
  cin>>n;
  for(n;n>a;a++){
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