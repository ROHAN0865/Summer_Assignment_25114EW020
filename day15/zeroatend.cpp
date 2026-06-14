#include<iostream>
using namespace std;

void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void moveZero(int arr[], int n)
{
    int j=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
}

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    input(arr,n);
    moveZero(arr,n);
    display(arr,n);

    return 0;
}