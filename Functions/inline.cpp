#include<iostream>
using namespace std;
int sum(int a,int b);
int main()
{
    int r=sum(10,3);
    cout<<r;
    
    
    return 0;
}

inline int sum(int a,int b)
{
    return a+b;
}