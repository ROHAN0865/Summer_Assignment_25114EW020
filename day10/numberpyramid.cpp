#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // increasing numbers
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        // decreasing numbers
        for (int l = i - 1; l >= 1; l--)
        {
            cout << l;
        }
        cout << "\n";
    }
    return 0;
}