#include<iostream>
using namespace std;
//input of array
int input(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

//for display of array
int display(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i] <<" ";
    }
}
int main()
{  
    int n , arr[100];
   cout<<"ENTER THE SIZE OF ARRAY :\n";
   cin>>n;
   cout<<"ENTER THE ELEMENT OF ARRAY : \n";
   input(arr,n);
   display(arr,n);
   
}