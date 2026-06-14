#include<iostream>
using namespace std;
void input(int a[],int n){
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

int secondLargest(int a[],int n){
    int largest=a[0];
    int second=a[0];
    for(int i=1;i<n;i++) {
        if(a[i]>largest) {
            second=largest;
            largest=a[i];
        }
       else if(a[i]>second && a[i]!=largest){
            second=a[i];
        }
    }
    return second;
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    input(a,n);
    cout<<"Second Largest = "<<secondLargest(a,n);
    return 0;
}