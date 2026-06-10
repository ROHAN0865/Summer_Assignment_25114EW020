#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;
  for(int i=1; i<=n; i++){
      for(int j=1;j<i;j++){
         cout<<" ";
      }
      for(int k=n-i;k>=0;k--){
         cout<<"*";
       }
      for(int l=n-i;l>0;l--){
        cout<<"*";
      }
     cout<<"\n";
   } 
}