#include<iostream>
using namespace std;
int evenodd(int);
int main()
{
    int r=0;
    r=evenodd(5);
    if(r==1)
    cout<<"Even";
    else
    cout<<"Odd";
    return 0;
}

int evenodd(int n)
{
    if(n%2==0)
    return 1;
    else 
    return 0;
}