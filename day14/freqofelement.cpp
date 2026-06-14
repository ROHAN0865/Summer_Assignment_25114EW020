#include<iostream>
using namespace std;
//input funtion
void input(int a[],int n){   
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
}

//funtion of frequency of element
int frequency(int a[],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    return count;
}
int main(){
    int n,key;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    input(a,n);
    cout<<"Enter element to find fequency of : ";
    cin>>key;
    cout<<"Frequency = "<<frequency(a,n,key);
}