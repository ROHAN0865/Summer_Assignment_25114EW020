#include<iostream>
using namespace std;

void guess() {
    int num = 45, guess;

    do {
        cout << "Enter Guess Number : ";
        cin >> guess;
        if(guess > num) {
            cout << "Too High" << endl;
        }
        else if(guess < num) {
            cout << "Too Low" << endl;
        }
        else {
            cout << "Correct Guess" << endl;
        }

    } while(guess != num);
}

int main() {
    guess();

    return 0;
}