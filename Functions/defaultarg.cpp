#include<iostream>
using namespace std;
// function declaration must come before main in default arguments.
int sum(int a,int b=2)
{
    return a+b;
}
int main()
{
    int res=0;
    res=sum(10);
    cout<<res;
    return 0;
}

