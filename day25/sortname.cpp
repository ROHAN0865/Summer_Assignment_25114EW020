#include <iostream>
#include <cstring>
using namespace std;

void sortNames(char name[][50], int n){
    char temp[50];
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++){
            if(strcmp(name[j], name[j + 1]) > 0) {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    cout << "Sorted Names:\n";

    for(int i = 0; i < n; i++)
        cout << name[i] << endl;
}

int main(){
    int n;
    cout << "enter number of names: ";
    cin >> n;
    char name[n][50];
    cout << "enter names:\n";
    for(int i = 0; i < n; i++)
        cin >> name[i];

    sortNames(name, n);

    return 0;
}