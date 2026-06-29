#include<iostream>
using namespace std;

int main() {
    int ch;
    float a,b;

    do {
        cout<<"\n1.add";
        cout<<"\n2.subtract";
        cout<<"\n3.multiply";
        cout<<"\n4.divide";
        cout<<"\n5.exit";
        cout<<"\nenter choice : ";
        cin>>ch;

        if(ch>=1 && ch<=4) {
            cout<<"enter two numbers : ";
            cin>>a>>b;
        }

        switch(ch) {
            case 1:
                cout<<"addition = "<<a+b;
                break;

            case 2:
                cout<<"subtraction = "<<a-b;
                break;

            case 3:
                cout<<"multiplication = "<<a*b;
                break;

            case 4:
                if(b!=0) {
                    cout<<"division = "<<a/b;
                }
                else {
                    cout<<"cannot divide by zero";
                }
                break;

            case 5:
                cout<<"exit";
                break;

            default:
                cout<<"invalid choice";
        }

    } while(ch!=5);

    return 0;
}