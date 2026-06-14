#include<iostream>
using namespace std;
//funtion for input 
void input(int a[],int n){
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
//funtion to find dublicate 
void duplicate(int a[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])  {
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    input(a,n);
    cout<<"Duplicate elements: ";
    duplicate(a,n);

    return 0;
}