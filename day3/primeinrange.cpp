#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the range: ";
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int key = 0;

        for (int divisor = 2; divisor < num; divisor++) {
            if (num % divisor == 0) {
                key = 1;
                break;
            }
        }

        if (num > 1 && key == 0) {
            cout << num << "\n";
        }
    }

    return 0;
}