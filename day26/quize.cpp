#include<iostream>
using namespace std;

void quiz()
{
    int ans, score=0;

    cout<<"Q1. Capital of India?"<<endl;
    cout<<"1. Delhi"<<endl;
    cout<<"2. Mumbai"<<endl;
    cout<<"3. Chennai"<<endl;
    cout<<"4. Kolkata"<<endl;

    cin>>ans;

    if(ans==1)
        score++;

    cout<<"\nQ2. 10 + 20 = ?"<<endl;
    cout<<"1. 10"<<endl;
    cout<<"2. 20"<<endl;
    cout<<"3. 30"<<endl;
    cout<<"4. 40"<<endl;

    cin>>ans;

    if(ans==3)
        score++;

    cout<<"\nQ3. C++ is a"<<endl;
    cout<<"1. Programming Language"<<endl;
    cout<<"2. Browser"<<endl;
    cout<<"3. Operating System"<<endl;
    cout<<"4. Game"<<endl;

    cin>>ans;

    if(ans==1)
        score++;

    cout<<"\nFinal Score = "<<score<<"/3";
}

int main()
{
    quiz();
    return 0;
}