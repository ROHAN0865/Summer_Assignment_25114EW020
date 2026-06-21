#include <iostream>
using namespace std;
//funtion for counting string length
int length(char str[]){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}

int main()
{
    char str[100];
    cout << "Enter a string: ";
    //we are unsing getline becoz it can store sentence with spaces and space take length(1)
    cin.getline(str, 100);
    cout << "Length = " << length(str);
    return 0;
}