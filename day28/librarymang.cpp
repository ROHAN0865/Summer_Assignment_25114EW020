#include<iostream>
using namespace std;

class library{
public:
    int id;
    char name[50];
    int days;

    void input(){
        cout<<"Enter Book ID: ";
        cin>>id;
        cout<<"Enter Book Name: ";
        cin>>name;
        cout<<"Enter Days Issued: ";
        cin>>days;
    }

    void display(){
        cout<<"\nBook ID: "<<id;
        cout<<"\nBook Name: "<<name;
        cout<<"\nDays Issued: "<<days;
        if(days>15){
            cout<<"\nFine: "<<(days-15)*5;
        }
        else{
            cout<<"\nNo Fine";
        }
    }
};

int main(){
    library l;
    l.input();
    l.display();
    return 0;
}