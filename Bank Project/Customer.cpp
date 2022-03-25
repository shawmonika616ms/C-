#include<iostream>
#include "Account.cpp"
using namespace std;

class Customer:public Account
{
    public: 
    void apply_for_loan();
    void show_customer_details();
};

void Customer::show_customer_details()
{
     cout<<"Customer  all details"<<endl;
}
void Customer::apply_for_loan()
{
    cout<<"Welcome!! Different categories of loan with interest rate are given below\n";
    cout<<"1. Housing loans to individuals  : Rate of interest 8.75 per annum\n";
    cout<<"2. Car loan Scheme               : Rate of interest 9.25 per annum\n";
    cout<<"3. Education Loan                : Rate of interest 10.25 per annum\n";
    cout<<"4. Car loan Scheme               : Rate of interest 9.25 per annum\n";
    cout<<"5. Personal Loan                 : Rate of interest 12.0 per annum\n";
    cout<<"6. Mortage of immovable property : Rate of interest 12.5 per annum\n";
    cout<<"7. Loan for purchase two wheelers: Rate of interest 11.85 per annum\n";

    
}


