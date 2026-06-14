#include<iostream>
using namespace std;

void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void rightRotate(int arr[], int n, int k)
{
    k=k%n;

    while(k--)
    {
        int temp=arr[n-1];

        for(int i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }

        arr[0]=temp;
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

    rightRotate(arr,n,k);

    display(arr,n);

    return 0;
}