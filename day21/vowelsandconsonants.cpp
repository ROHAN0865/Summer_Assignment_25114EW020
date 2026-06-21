#include <iostream>
using namespace std;

void vowelsandconsonants(char str[]){
    int vowels = 0, consonants = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')){
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
               str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }
    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;
}

int main(){
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    vowelsandconsonants(str);
    return 0;
}