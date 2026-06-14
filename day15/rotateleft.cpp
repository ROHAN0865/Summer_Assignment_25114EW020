#include<iostream>
using namespace std;

void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void leftRotate(int arr[], int n, int k)
{
    k=k%n;

    while(k--)
    {
        int temp=arr[0];

        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }

        arr[n-1]=temp;
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
    int n,k;
    cin>>n;

    int arr[n];

    input(arr,n);

    cin>>k;

    leftRotate(arr,n,k);

    display(arr,n);

    return 0;
}