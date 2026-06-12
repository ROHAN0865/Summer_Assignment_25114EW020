#include <iostream>
using namespace std;
int armstrong(int n)
{
    int temp = n;
    int count = 0;
    int sum = 0;
    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = n;
    while(temp > 0)
    {
        int digit = temp % 10;
         int p=1;
        for(int i=1;i<=count;i++){
            p=p*digit;
        }
        sum=sum+p;
        temp = temp / 10;
    }
    if(sum == n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    if(armstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
    return 0;
}