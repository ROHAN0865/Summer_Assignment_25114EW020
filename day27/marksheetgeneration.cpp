#include<iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float m1,m2,m3,m4,m5,total,per;
};

int main()
{
    Student s;

    cout<<"Enter Roll Number : ";
    cin>>s.roll;

    cout<<"Enter Name : ";
    cin>>s.name;

    cout<<"Enter Marks of Subject 1 : ";
    cin>>s.m1;

    cout<<"Enter Marks of Subject 2 : ";
    cin>>s.m2;

    cout<<"Enter Marks of Subject 3 : ";
    cin>>s.m3;

    cout<<"Enter Marks of Subject 4 : ";
    cin>>s.m4;

    cout<<"Enter Marks of Subject 5 : ";
    cin>>s.m5;

    s.total=s.m1+s.m2+s.m3+s.m4+s.m5;
    s.per=s.total/5;

    cout<<"\n------ MARKSHEET ------";

    cout<<"\nRoll Number : "<<s.roll;
    cout<<"\nName : "<<s.name;

    cout<<"\nSubject 1 : "<<s.m1;
    cout<<"\nSubject 2 : "<<s.m2;
    cout<<"\nSubject 3 : "<<s.m3;
    cout<<"\nSubject 4 : "<<s.m4;
    cout<<"\nSubject 5 : "<<s.m5;

    cout<<"\nTotal Marks : "<<s.total;
    cout<<"\nPercentage : "<<s.per<<"%";

    if(s.per>=90)
    {
        cout<<"\nGrade : A+";
    }
    else if(s.per>=75)
    {
        cout<<"\nGrade : A";
    }
    else if(s.per>=60)
    {
        cout<<"\nGrade : B";
    }
    else if(s.per>=40)
    {
        cout<<"\nGrade : C";
    }
    else
    {
        cout<<"\nGrade : Fail";
    }

    return 0;
}