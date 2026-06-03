#include <iostream>
using namespace std;

int sumDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return (num % 10) + sumDigits(num / 10);
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    cout << "Sum of digits = " << sumDigits(num);

    return 0;
}