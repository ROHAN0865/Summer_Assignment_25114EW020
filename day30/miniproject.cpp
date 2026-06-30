#include<iostream>
using namespace std;

int roll[100],n=0;
char name[100][50];
float marks[100];

void add() {
    cout<<"enter roll : ";
    cin>>roll[n];

    cout<<"enter name : ";
    cin>>name[n];

    cout<<"enter marks : ";
    cin>>marks[n];

    n++;
}

void display() {
    int i;

    for(i=0;i<n;i++) {
        cout<<"\nroll : "<<roll[i];
        cout<<"\nname : "<<name[i];
        cout<<"\nmarks : "<<marks[i];
        cout<<"\n";
    }
}

int main() {
    int ch;

    do {
        cout<<"\n1.add student";
        cout<<"\n2.display records";
        cout<<"\n3.exit";
        cout<<"\nenter choice : ";
        cin>>ch;

        switch(ch) {
            case 1:
                add();
                break;

            case 2:
                display();
                break;

            case 3:
                cout<<"exit";
                break;

            default:
                cout<<"invalid choice";
        }

    } while(ch!=3);

    return 0;
}