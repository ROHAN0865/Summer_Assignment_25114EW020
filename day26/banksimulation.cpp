#include<iostream>
using namespace std;

void atm() {
    int ch;
    float bal = 10000, amt;

    do {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Exit";

        cout << "\nEnter Choice : ";
        cin >> ch;

        switch(ch) {

            case 1: {
                cout << "Balance = " << bal;
                break;
            }

            case 2: {
                cout << "Enter Deposit Amount : ";
                cin >> amt;

                bal = bal + amt;

                cout << "Amount Deposited";
                break;
            }

            case 3: {
                cout << "Enter Withdraw Amount : ";
                cin >> amt;

                if(amt <= bal) {
                    bal = bal - amt;
                    cout << "Amount Withdrawn\n";
                    cout<< "avaliable balance: "<<bal;
                }
                else {
                    cout << "Insufficient Balance";
                }

                break;
            }

            case 4: {
                cout << "Thank You";
                break;
            }

            default: {
                cout << "Invalid Choice";
            }

        }

    } while(ch != 4);
}

int main() {
    atm();

    return 0;
}