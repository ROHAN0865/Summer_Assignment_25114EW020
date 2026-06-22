#include <iostream>
using namespace std;
//funtion for feq
int frequency(char str[], char ch) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char ch;
    cout << "Enter string: ";
    cin.getline(str, 100);
    cout << "Enter character: ";
    cin >> ch;
    cout << "Frequency = " << frequency(str, ch);
    return 0;
}