#include<iostream>
#include<array>
using namespace std;

int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    double sum=0;
   int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"SUM OF THE ARRAY ARE :";
    cout<<sum <<"\n";
    double avg=sum/n;
    cout<<"AVERAGE OF ARRAY : ";
    cout<<avg;
    

}