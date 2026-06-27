#include<iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s[100];
    int n,i,ch;

    n=0;

    do
    {
        cout<<"\n1. Add Student";
        cout<<"\n2. Display Students";
        cout<<"\n3. Search Student";
        cout<<"\n4. Exit";
        cout<<"\nEnter Choice : ";
        cin>>ch;

        if(ch==1)
        {
            cout<<"Enter Roll : ";
            cin>>s[n].roll;

            cout<<"Enter Name : ";
            cin>>s[n].name;

            cout<<"Enter Marks : ";
            cin>>s[n].marks;

            n++;
        }

        else if(ch==2)
        {
            for(i=0;i<n;i++)
            {
                cout<<"\nRoll : "<<s[i].roll;
                cout<<"\nName : "<<s[i].name;
                cout<<"\nMarks : "<<s[i].marks;
                cout<<"\n";
            }
        }

        else if(ch==3)
        {
            int roll,found=0;

            cout<<"Enter Roll to Search : ";
            cin>>roll;

            for(i=0;i<n;i++)
            {
                if(s[i].roll==roll)
                {
                    cout<<"\nStudent Found";
                    cout<<"\nRoll : "<<s[i].roll;
                    cout<<"\nName : "<<s[i].name;
                    cout<<"\nMarks : "<<s[i].marks;
                    found=1;
                }
            }

            if(found==0)
            {
                cout<<"Student Not Found";
            }
        }

    }
    while(ch!=4);

    return 0;
}