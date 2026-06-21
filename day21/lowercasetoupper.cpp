#include <iostream>
using namespace std;

void uppercase(char str[]){
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
}

int main(){
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    uppercase(str);
    cout << "Uppercase string: " << str;
    return 0;
}