#include<iostream>
using namespace std;
//reference variable behaves as an alias for another variable;
// 2 types 
//ref to no const value and ref as alias



int main()
{
    // non const value
    int a=10;
    int &v=a;
    cout<<v;
    // as alias
     int b=10;
     int &d=b;
     int &c=b;
     cout<<d<<c;

    return 0;
}