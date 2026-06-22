#include <iostream>
using namespace std;
//funtion for counting words in sentence
int countWords(char str[]) {
    int words = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if((i == 0 && str[i] != ' ') ||
           (str[i] != ' ' && str[i - 1] == ' ')) {
            words++;
        }
    }
    return words;
}

int main() {
    char str[100];
    cout << "Enter sentence: ";
    cin.getline(str, 100);
    cout << "Total Words = " << countWords(str);
    return 0;
}