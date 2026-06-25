#include <iostream>
using namespace std;

void commonChar(char s1[], char s2[]){
    cout << "common characters: ";
    for(int i = 0; s1[i] != '\0'; i++){
        bool duplicate = false;
        for(int k = 0; k < i; k++){
            if(s1[i] == s1[k]) {
                duplicate = true;
                break;
            }
        }

        if(duplicate)
            continue;

        for(int j = 0; s2[j] != '\0'; j++){
            if(s1[i] == s2[j]){
                cout << s1[i] << " ";
                break;
            }
        }
    }
}

int main(){
    char s1[100], s2[100];
    cout << "enter first string: ";
    cin >> s1;
    cout << "enter second string: ";
    cin >> s2;
    commonChar(s1, s2);
    return 0;
}