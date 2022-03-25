#include<iostream>
using namespace std;
class Account
{
    public:
    int id=10;
    float salary=50000;
};

class Programmer:public Account
{
    public:
    int id=100;
    float bonus=4000;
};

int main()
{
    Account p= Programmer() ;
    cout<<p.id;
    cout<<p.salary;
   
    return 0;
}