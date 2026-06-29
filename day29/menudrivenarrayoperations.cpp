#include<iostream>
using namespace std;

int main() {
    int a[100],n,i,ch,sum,max,min;

    cout<<"enter size : ";
    cin>>n;

    cout<<"enter elements : ";
    for(i=0;i<n;i++) {
        cin>>a[i];
    }

    do {
        cout<<"\n1.display";
        cout<<"\n2.sum";
        cout<<"\n3.maximum";
        cout<<"\n4.minimum";
        cout<<"\n5.exit";
        cout<<"\nenter choice : ";
        cin>>ch;

        switch(ch) {
            case 1:
                for(i=0;i<n;i++) {
                    cout<<a[i]<<" ";
                }
                break;

            case 2:
                sum=0;
                for(i=0;i<n;i++) {
                    sum=sum+a[i];
                }
                cout<<"sum = "<<sum;
                break;

            case 3:
                max=a[0];
                for(i=1;i<n;i++) {
                    if(a[i]>max) {
                        max=a[i];
                    }
                }
                cout<<"maximum = "<<max;
                break;

            case 4:
                min=a[0];
                for(i=1;i<n;i++) {
                    if(a[i]<min) {
                        min=a[i];
                    }
                }
                cout<<"minimum = "<<min;
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