#include<iostream>
using namespace std;

class Object
{
    public: void sum(int a,int b)
    {
        cout<<a+b;
    }

};
int main()
{

Object ob;
ob.sum(10,20);

    return 0;
}