#include<iostream>
using namespace std;
int sum(int ,int);
int sum(int ,int,int);
int main()
{

    int a1=0,a2=0;
    a1=sum(10,20);
    a2=sum(10,20,30);
    cout<<a1;
    cout<<a2;
    return 0;
}

int sum(int a,int b)
{
    return a+b;
}

int sum(int a,int b,int c)
{
    return a+b+c;
}