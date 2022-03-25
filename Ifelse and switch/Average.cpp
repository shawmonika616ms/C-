#include<iostream>
using namespace std;
int main()
{
    int n1,n2,avg=0;
    cout<<"Enter the marks";
    cin>>n1>>n2;
    avg=(n1+n2)/2;
    if(avg>=50 && avg<=60)
    cout<<"2nd Division";
    else if(avg>=60 && avg<=80)
    cout<<"1st Divisoin";


    return 0;
}