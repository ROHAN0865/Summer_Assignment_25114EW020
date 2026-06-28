#include<iostream>
using namespace std;

class bank{
public:
    int acc;
    char name[50];
    float balance;

    void input(){
        cout<<"enter Account Number: ";
        cin>>acc;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Balance: ";
        cin>>balance;
    }

    void deposit(){
        float amount;
        cout<<"Enter Deposit Amount: ";
        cin>>amount;
        balance=balance+amount;
    }

    void withdraw(){
        float amount;
        cout<<"Enter Withdraw Amount: ";
        cin>>amount;
        if(amount<=balance){
            balance=balance-amount;
        }
        else{
            cout<<"Insufficient Balance";
        }
    }

    void display(){
        cout<<"\nAccount Number: "<<acc;
        cout<<"\nName: "<<name;
        cout<<"\nBalance: "<<balance;
    }
};

int main(){
    bank b;
    b.input();
    b.deposit();
    b.withdraw();
    b.display();
    return 0;
}