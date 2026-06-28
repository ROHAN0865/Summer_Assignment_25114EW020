#include<iostream>
using namespace std;

class contact{
public:
    char name[50];
    char phone[15];
    char email[50];

    void input(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Phone Number: ";
        cin>>phone;
        cout<<"Enter Email: ";
        cin>>email;
    }

    void display(){
        cout<<"\nName: "<<name;
        cout<<"\nPhone Number: "<<phone;
        cout<<"\nEmail: "<<email;
    }
};

int main(){
    contact c;
    c.input();
    c.display();
    return 0;
}