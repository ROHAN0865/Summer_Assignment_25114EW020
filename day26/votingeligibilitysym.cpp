#include<iostream>
using namespace std;

void vote() {
    int age;

    cout << "Enter Age : ";
    cin >> age;

    if(age >= 18) {
        cout << "Eligible for Voting";
    }
    else {
        cout << "Not Eligible for Voting";
    }
}

int main() {
    vote();

    return 0;
}