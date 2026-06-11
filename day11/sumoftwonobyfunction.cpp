#include<iostream>
using namespace std;
//sum of two number using funtion
int sum(float a,float b ){
  
    float s=a+b;
    cout<<"SUM OF THE NUMBERS ARE : " <<s;
}
int main()
{
    sum(5,6);
    cout<<endl;
    sum(2.5,2.4);
}