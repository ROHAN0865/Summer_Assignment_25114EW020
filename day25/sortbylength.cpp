#include <iostream>
#include <cstring>
using namespace std;

void sortWords(char word[][50], int n)
{
    char temp[50];

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(strlen(word[j]) > strlen(word[j + 1]))
            {
                strcpy(temp, word[j]);
                strcpy(word[j], word[j + 1]);
                strcpy(word[j + 1], temp);
            }
        }
    }

    cout << "Words Sorted by Length:\n";

    for(int i = 0; i < n; i++)
        cout << word[i] << endl;
}

int main()
{
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    char word[n][50];

    cout << "Enter words:\n";
    for(int i = 0; i < n; i++)
        cin >> word[i];

    sortWords(word, n);

    return 0;
}