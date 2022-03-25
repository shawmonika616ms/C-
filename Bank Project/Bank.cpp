#include<iostream>
#include "Rbi.cpp"
using namespace std;



class Bank:Rbi
{
     public:
     long acc_no;
     string name;
     string acc_type;
     long balance;

     public:
     void create_account();
     void delete_account();
     void update_account(string cus_name);
     void show_all_account_Holder_names();
     void guide_lines();
     
};

void Bank:: create_account()
{
  
   cout<<"Enter Account number\n"<<endl;
   cin>>acc_no;
   cout<<"Enter your name\n"<<endl;
   cin>>name;
   cout<<"Enter Account Type (Ex- Current or Saving)\n";
   cin>>acc_type;
   tryagain:
   cout<<"Enter the balance to create your account (balance>=1000)\n";
   cin>>balance;
   if(balance<1000)
   {
       cout<<"Please enter a valid amount\n";
        goto tryagain;
   }

   cout<<"Your account is created successfully!!\n";

}

void Bank::show_all_account_Holder_names()
{
   cout<<"Name is: "<<name<<endl;
   cout<<"Account no is: "<<acc_no<<endl;
   cout<<"Account type is: "<<acc_type<<endl;
   cout<<"Account balance is: "<<balance<<endl;
}

void Bank::delete_account()
{
    
cout<<"Account deleted\n";
    
}
void Bank::update_account(string cus_name)
{
  
  cout<<"Details updated\n"<<cus_name<<endl;
}

void Bank::guide_lines()
{
   cout<<"******************************************\n";
   cout<<"1. Guidelines on Know Your Customer norms and Cash transactions\n";
   cout<<"2. Know Your Customer (KYC) guidelines for New accounts\n";
   cout<<"3. Know Your Customer procedures for existing customers\n";
   cout<<"4. Ceiling and monitoring of cash transactions\n";
   cout<<"5. Risk management and monitoring procedures\n";
   cout<<"6. Record Keeping\n";
   cout<<"7.  Training of staff and management\n";
   cout<<"8. These guidelines are issued under Section 35 (A) of the Banking Regulation Act, 1949 and any contravention of the same will attract penalties under the relevant provisions of the Act. Banks are advised to bring the guidelines to the notice of their branches and controlling offices.\n";
   cout<<"******************************************\n";
}