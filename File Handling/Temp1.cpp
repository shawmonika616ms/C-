#include<iostream>
using namespace std;
template <class T>
T add(T a,T b)
{
    T result=a+b;
    return result;
}
int main()
{
    int r=add(10,20);
    cout<<r;
    float r1=add(10.5,0.5);
    cout<<r1;

    return 0;
}