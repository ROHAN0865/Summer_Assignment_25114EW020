#include <iostream>
using namespace std;

int main()
{
    int n, temp, digit, sum = 0, count = 0;

    cout << "Enter a number : ";
    cin >> n;

    temp = n;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        int p=1;
        for(int i=1;i<=count;i++){
            p=p*digit;
        }
        sum=sum+p;
        temp=temp/10;
    }

    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}