#include <iostream>
using namespace std;

int reverseNum(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }

    return reverseNum(num / 10, rev * 10 + num % 10);
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    cout << "Reverse number = " << reverseNum(num, 0);

    return 0;
}