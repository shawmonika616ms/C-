#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    int *ptr;
    cout<<"Enter the elements in array";
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }

ptr=marks;
cout<<*ptr;
cout<<*marks;
    return 0;
}