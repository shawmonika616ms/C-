#include<iostream>
using namespace std;

class Account
{
    public:
    void desposit();
    void withdraw();
    void check_balance();
};

void Account::desposit()
{

    cout<<"Amount deposited\n";
}

void Account::withdraw()
{
    cout<<"Amount withdrawn\n";
}

void Account::check_balance()
{
    
    cout<<" $ balance left in your account "<<endl;
}
