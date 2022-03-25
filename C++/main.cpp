#include<iostream>
using namespace std;
#include "sum.cpp"
#include "mul.cpp"
int main()
{
    Sum ob=Sum(10,20);
    ob.cal();
    ob.show();
     Mul ob1=Mul(10,20);
    ob1.cal();
    ob1.show();
}