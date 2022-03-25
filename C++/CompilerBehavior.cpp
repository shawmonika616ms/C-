#include<iostream>
using namespace std;

class Parent
{
    public:void show()
    {
        cout<<"Parent class";
    }
};

class child:public Parent
{
    public:void show()
    {
        cout<<"child class";
    }
};

class subchild:public child
{
    public:void show()
    {
        cout<<"subchild";
    }
};


int  main()

{
    subchild ob;
    ob.show();
    return 0;
}