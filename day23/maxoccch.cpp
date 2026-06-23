#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "enter string: ";
    cin.getline(str, 100);
    char maxChar;
    int maxCount = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            continue;
        int count = 0;
        for(int j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }
    cout << "maximum occurring character = " << maxChar;
    cout << "\nfrequency = " << maxCount;

    return 0;
}