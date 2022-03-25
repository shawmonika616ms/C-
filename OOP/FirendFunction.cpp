#include<iostream>
using namespace std;
class Phone
{
    int id;
    string name;
    private:float salary;

    public:void show();
    friend void salary(Phone p);
};

void Phone::show()
{
    cout<<id<<name;
}
 void salary(Phone p)
 {
    cout<<p.salary;
 }
int main()
{
    Phone p;
    p.show();
    salary(p);
    return 0;
}