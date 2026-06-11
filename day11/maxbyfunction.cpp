#include <iostream>
using namespace std;

// find maximum using function
void maximum(int a, int b)
{
    if(a > b)
    {
        cout << a << " is maximum";
    }
    else
    {
        cout << b << " is maximum";
    }
}
int main()
{
    int a, b;
    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;
    maximum(a, b);
}