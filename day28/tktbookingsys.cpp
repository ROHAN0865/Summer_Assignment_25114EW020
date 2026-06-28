#include<iostream>
using namespace std;

class ticket{
public:
    char name[50];
    int seats;
    int total;

    void input(){
        cout<<"Enter Passenger Name: ";
        cin>>name;
        cout<<"Enter Number of Seats: ";
        cin>>seats;
        total=seats*500;
    }

    void display(){
        cout<<"\nPassenger Name: "<<name;
        cout<<"\nSeats Booked: "<<seats;
        cout<<"\nTotal Fare: "<<total;
    }
};

int main(){
    ticket t;
    t.input();
    t.display();
    return 0;
}