#include<iostream>
using namespace std;

class employee {
    int id;
    char name[50];
    float salary;

    public:

    void input() {
        cout<<"enter employee id : ";
        cin>>id;

        cout<<"enter employee name : ";
        cin>>name;

        cout<<"enter salary : ";
        cin>>salary;
    }

    void display() {
        cout<<"\nemployee id : "<<id;
        cout<<"\nemployee name : "<<name;
        cout<<"\nsalary : "<<salary;
    }
};

int main() {
    employee e;

    e.input();
    e.display();

    return 0;
}