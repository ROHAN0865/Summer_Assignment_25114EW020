#include<iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    Employee e[100];
    int n,i,ch;

    n=0;

    do
    {
        cout<<"\n1. Add Employee";
        cout<<"\n2. Display Employees";
        cout<<"\n3. Search Employee";
        cout<<"\n4. Exit";
        cout<<"\nEnter Choice : ";
        cin>>ch;

        if(ch==1)
        {
            cout<<"Enter ID : ";
            cin>>e[n].id;

            cout<<"Enter Name : ";
            cin>>e[n].name;

            cout<<"Enter Salary : ";
            cin>>e[n].salary;

            n++;
        }

        else if(ch==2)
        {
            for(i=0;i<n;i++)
            {
                cout<<"\nID : "<<e[i].id;
                cout<<"\nName : "<<e[i].name;
                cout<<"\nSalary : "<<e[i].salary;
                cout<<"\n";
            }
        }

        else if(ch==3)
        {
            int id,found=0;

            cout<<"Enter ID to Search : ";
            cin>>id;

            for(i=0;i<n;i++)
            {
                if(e[i].id==id)
                {
                    cout<<"\nEmployee Found";
                    cout<<"\nID : "<<e[i].id;
                    cout<<"\nName : "<<e[i].name;
                    cout<<"\nSalary : "<<e[i].salary;
                    found=1;
                }
            }

            if(found==0)
            {
                cout<<"Employee Not Found";
            }
        }

    }
    while(ch!=4);

    return 0;
}