#include<iostream>
using namespace std;
 double pi=3.14;
int areaofcircle(int);
int periofcircle(int);
int main()
{
    int a=0,p=0;
    a=areaofcircle(5);
    cout<<a;
    p=periofcircle(4);
    cout<<p;
    double pi=3.55;
    cout<<::pi;
    return 0;
}

int areaofcircle(int r)
{
    return pi*r*r;
}

int periofcircle(int r)
{
    return 2*pi*r;
}