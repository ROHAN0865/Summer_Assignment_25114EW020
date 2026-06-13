#include<iostream>
using namespace std;
//input of array
int input(int arr[],int size){
    cout<<"enter element of array :";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

//finding smallest and largest
void largeSmall(int arr[],int size)
{
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<size;i++) {
        if(arr[i]>max)  {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Largest = "<<max<<endl;
    cout<<"Smallest = "<<min;
}

int main(){
    int arr[100],size;
    cout<<"enter size of array :";
    cin>>size;
    input(arr,size);
    largeSmall(arr,size);
}