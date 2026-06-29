#include<iostream>
using namespace std;

class inventory {
    int id,qty;
    char name[50];

    public:

    void input() {
        cout<<"enter item id : ";
        cin>>id;

        cout<<"enter item name : ";
        cin>>name;

        cout<<"enter quantity : ";
        cin>>qty;
    }

    void display() {
        cout<<"\nitem id : "<<id;
        cout<<"\nitem name : "<<name;
        cout<<"\nquantity : "<<qty;
    }
};

int main() {
    inventory i;

    i.input();
    i.display();

    return 0;
}