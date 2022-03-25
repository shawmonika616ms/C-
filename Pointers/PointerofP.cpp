#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int **pp;
    int *p;
    p=&a;
    pp=&p;
    cout<<**pp<<*p<<endl;
    
    return 0;
}