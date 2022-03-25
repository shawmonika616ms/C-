#include<iostream>
using namespace std;
class Employee
{
    int id;
    string name;
    public:Employee(int i, string n)
    {
        id=i;
        name=n;
    }

    public:void show()
    {
        cout<<id<<name<<endl;
    }
};
int main()
{
    Employee e(1,"Joe");
    e.show();
    return 0;
}