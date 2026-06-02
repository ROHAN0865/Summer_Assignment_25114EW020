#include <iostream>
using namespace std;

int main()
{
    int binary;
    int decimal = 0;
    int base = 1;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0)
    {
        int digit = binary % 10;
        decimal = decimal + digit * base;
        base = base * 2;
        binary = binary / 10;
    }

    cout << "Decimal = " << decimal;

    return 0;
}