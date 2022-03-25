#include<iostream>
using namespace std;
int main()
{

    int a[5];
    int *ptr[5];

    cout<<"Enter the 5 elements";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<5;i++)
    {
        ptr[i]=&a[i];
    }

    cout<<"Values are"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*ptr[i];
    }
    return 0;
}