#include<iostream>
using namespace std;
//input funtion
void input(int a[],int n){
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

//funtion for linear scr
int linearSearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    input(a,n);
    cout<<"Enter element to search: ";
    cin>>key;
    int ans=linearSearch(a,n,key);
    if(ans==-1) {
        cout<<"Element not found";
    }
    else {
        cout<<"Element found at index "<<ans;
    }
}