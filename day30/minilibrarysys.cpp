#include<iostream>
using namespace std;

class library {
    int id;
    char name[50];

    public:

    void input() {
        cout<<"enter book id : ";
        cin>>id;

        cout<<"enter book name : ";
        cin>>name;
    }

    void display() {
        cout<<"\nbook id : "<<id;
        cout<<"\nbook name : "<<name;
    }
};

int main() {
    library b;

    b.input();
    b.display();

    return 0;
}