#include<iostream>
using namespace std;

int main() {
    int n,i;
    int roll[100];
    char name[100][50];
    float marks[100];

    cout<<"enter number of students : ";
    cin>>n;

    for(i=0;i<n;i++) {
        cout<<"\nenter roll : ";
        cin>>roll[i];

        cout<<"enter name : ";
        cin>>name[i];

        cout<<"enter marks : ";
        cin>>marks[i];
    }

    cout<<"\nstudent records\n";

    for(i=0;i<n;i++) {
        cout<<"\nroll : "<<roll[i];
        cout<<"\nname : "<<name[i];
        cout<<"\nmarks : "<<marks[i];
        cout<<"\n";
    }

    return 0;
}