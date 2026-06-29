#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

int main() {
    char s[100];
    int ch,i;

    cout<<"enter string : ";
    cin.getline(s,100);

    do {
        cout<<"\n1.length";
        cout<<"\n2.reverse";
        cout<<"\n3.uppercase";
        cout<<"\n4.lowercase";
        cout<<"\n5.exit";
        cout<<"\nenter choice : ";
        cin>>ch;

        switch(ch) {
            case 1:
                cout<<"length = "<<strlen(s);
                break;

            case 2:
                strrev(s);
                cout<<"reverse = "<<s;
                strrev(s);
                break;

            case 3:
                for(i=0;s[i]!='\0';i++) {
                    s[i]=toupper(s[i]);
                }
                cout<<s;
                break;

            case 4:
                for(i=0;s[i]!='\0';i++) {
                    s[i]=tolower(s[i]);
                }
                cout<<s;
                break;

            case 5:
                cout<<"exit";
                break;

            default:
                cout<<"invalid choice";
        }

    } while(ch!=5);

    return 0;
}