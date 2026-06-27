#include<iostream>
using namespace std;

struct Salary
{
    int id;
    char name[50];
    float basic,hra,da,total;
};

int main()
{
    Salary s[100];
    int n,i,ch;

    n=0;

    do
    {
        cout<<"\n1. Add Employee Salary";
        cout<<"\n2. Display Salary";
        cout<<"\n3. Search Salary";
        cout<<"\n4. Exit";
        cout<<"\nEnter Choice : ";
        cin>>ch;

        if(ch==1)
        {
            cout<<"Enter Employee ID : ";
            cin>>s[n].id;

            cout<<"Enter Name : ";
            cin>>s[n].name;

            cout<<"Enter Basic Salary : ";
            cin>>s[n].basic;

            cout<<"Enter HRA : ";
            cin>>s[n].hra;

            cout<<"Enter DA : ";
            cin>>s[n].da;

            s[n].total=s[n].basic+s[n].hra+s[n].da;

            n++;
        }

        else if(ch==2)
        {
            for(i=0;i<n;i++)
            {
                cout<<"\nID : "<<s[i].id;
                cout<<"\nName : "<<s[i].name;
                cout<<"\nBasic : "<<s[i].basic;
                cout<<"\nHRA : "<<s[i].hra;
                cout<<"\nDA : "<<s[i].da;
                cout<<"\nTotal Salary : "<<s[i].total;
                cout<<"\n";
            }
        }

        else if(ch==3)
        {
            int id,found=0;

            cout<<"Enter Employee ID : ";
            cin>>id;

            for(i=0;i<n;i++)
            {
                if(s[i].id==id)
                {
                    cout<<"\nRecord Found";
                    cout<<"\nID : "<<s[i].id;
                    cout<<"\nName : "<<s[i].name;
                    cout<<"\nTotal Salary : "<<s[i].total;
                    found=1;
                }
            }

            if(found==0)
            {
                cout<<"Record Not Found";
            }
        }

    }
    while(ch!=4);

    return 0;
}