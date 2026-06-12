#include <iostream>
using namespace std;
//checking palindrome using function
int palindrome(int n)
{
    int temp = n;
    int rev = 0;
    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(rev == n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    if(palindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}