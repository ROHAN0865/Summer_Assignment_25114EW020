#include<iostream>
using namespace std;

int main()
{
  char str[100];   
  cout<<"enter the string :";
  cin.getline(str,100);
  for(int i=0;str[i]!='\0';i++){
    int count=0;
      //it will ignore th spaces 
      if(str[i]==' ')
      continue;
      for(int j=i+1;str[j]!='\0';j++){
        if(str[i]==str[j]){
            count++;
        }
      }
      if(count>0){
        cout<<"first repeating character in string is :"<<str[i];
        return 0;
      }
  }
   cout << "No repeating character found";
    return 0;
}