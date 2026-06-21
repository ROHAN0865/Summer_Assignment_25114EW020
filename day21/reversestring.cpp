#include <iostream>
using namespace std;
//length
int length(char str[]){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}
//reverse 
void reverseString(char str[]){
    int len = length(str);
    for(int i = len - 1; i >= 0; i--){
        cout << str[i];
    }
}

int main(){
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Reversed string: ";
    reverseString(str);
    return 0;
}