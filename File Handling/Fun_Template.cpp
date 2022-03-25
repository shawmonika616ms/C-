#include<iostream>
using namespace std;
template <class T> T add( T&a, T&b)
{
    T result=a+b;
    return result;
}
int main()
{
    int i=2,j=4;
    float m=7.5,n=2.5;
    cout<<"Integers"<<add(j,j);
    cout<<"Float"<<add(m,n);
    return 0;
}