#include <iostream>
using namespace std;

int main()
{
    // A perfect number is a positive integer that is exactly equal to the sum of its proper positive divisors
    int num, sum = 0;
    cout << "Enter a number : ";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        cout << "Perfect Number";
    }
    else
    {
        cout << "Not a Perfect Number";
    }
    return 0;
}