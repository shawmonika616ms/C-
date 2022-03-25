#include<iostream>
using namespace std;
#include "Bank.cpp"
#include "Customer.cpp"

int main()
{

    int n;
    cout<<"How many customers you want to input"<<endl;
    cin>>n;
    Bank bank[n];
    int ch;
    main_menu:
 
    cout<<"***************************************\n";
    cout<<"**********     1. Create Acount    ***********\n";
    cout<<"**********     2. Deposit Money    ***********\n";
    cout<<"**********     3. Withdraw Money   ***********\n";
    cout<<"**********     4. Check balance    ***********\n";
    cout<<"**********     5. check customer balance\n";
    cout<<"**********     6. show my details  ***********\n";
    cout<<"**********     7. Apply for Loan   ***********\n";
    cout<<"**********     8. Show all account holder Details\n";
    cout<<"**********     9. Update Account   ***********\n";
    cout<<"**********    10. Delete Account  ************\n";
    cout<<"**********    11. Guidlines/Help  ************\n";
    cout<<"**********    12. Exit            ************\n";
    cout<<"**********************************************\n";
    cout<<"Enter your choice\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        bank->create_account();
        for(int i=1;i<n;i++)
    {
        bank[i].create_account();
    }
        
                    char c;
                    cout<<"Press 'Y' for go back";
                    cin>>c;
                    switch(c)
                    {
                        case 'Y':
                        goto main_menu;
                        break;
                    }
          break;

         case 2:
          Account account;
            long acc_number;
           cout<<"Enter the account number in which you want to deposit money\n";
           cin>>acc_number;
           for(int i=0;i<n;i++)
           {
               if(bank[i].acc_no==acc_number)
               {
                   int amount;
                   cout<<"Enter the amount you want to deposit\n";
                   cin>>amount;
                   bank[i].balance=bank[i].balance+amount;
                     account.desposit();
               }
               else
               {
                   cout<<"Enter  Valid account number\n";
               }

           }

          
         
               char c5;
                    cout<<"Press 'Y' for go back";
                    cin>>c5;
                    switch(c5)
                    {
                        case 'Y':
                        goto main_menu;
                        break;
                    }
           break;

        case 3:
        long acc_number1;
        cout<<"Enter the account number in which you want to withdraw money\n";
        cin>>acc_number1;
        for(int i=0;i<n;i++)
        {
            if(bank[i].acc_no==acc_number1)
            {
                double amount1;
                withdraw:
                cout<<"Enter the amount you want to withdraw\n";
                cin>>amount1;
                if(amount1>bank[i].balance)
                {
                      cout<<"Insufficient Balanc\n";
                      goto withdraw;
                }
                else
                {
                bank[i].balance=bank[i].balance-amount1;
                account.withdraw();
                }
            }
            else
            {
                cout<<"Enter a valid account number\n";
            }
        }

        

        char c6;
                    cout<<"Press 'Y' for go back";
                    cin>>c6;
                    switch(c6)
                    {
                        case 'Y':
                        goto main_menu;
                        break;
                    }
        break;

        case 4:
        long acc_number2;
        cout<<"Enter account number to check balance\n";
        cin>>acc_number2;
        for(int i=0;i<n;i++)
        {
            if(bank[i].acc_no==acc_number2)
            {
                cout<<bank[i].balance;
                account.check_balance();
            }
            else
            {
                cout<<"Enter a valid account number\n";
            }
            
        }

        
        char c7;
                    cout<<"Press 'Y' for go back";
                    cin>>c7;
                    switch(c7)
                    {
                        case 'Y':
                        goto main_menu;
                        break;
                    }
        break;
        
        case 5:
         Customer customer;
        long account_number;
        cout<<"Enter the account number to check balance\n";
        cin>>account_number;
        for(int i=0;i<n;i++)
        {
            if(bank[i].acc_no==account_number)
            {
                cout<<bank[i].balance;
                
                 customer.check_balance();
            }
            else
            {
                cout<<"Enter a valid account number\n";
            }
        }
       

                    char c8;
                    cout<<"Press 'Y' for go back";
                    cin>>c8;
                    switch(c8)
                    {
                        case 'Y':
                        goto main_menu;
                        break;
                    }
        break;
            
        case 6:
        long account_number1;
        cout<<"Enter the account number to see your details";
        cin>>account_number1;
        for(int i=0;i<n;i++)
        {
            if(bank[i].acc_no==account_number1)
            {
                cout<<bank[i].name<<endl;
                cout<<bank[i].acc_no<<endl;
                cout<<bank[i].balance<<endl;
                cout<<bank[i].acc_type<<endl;
                customer.show_customer_details();
            }
            else
            {
                cout<<"Enter a valid account number\n";
            }
        }
        
         char c9;
                    cout<<"Press 'Y' for go back";
                    cin>>c9;
                    switch(c9)
                    {
                        case 'Y':
                        goto main_menu;
                        break;
                    }
        break;

        case 7:
        customer.apply_for_loan();
        char c10;
                    cout<<"Press 'Y' for go back";
                    cin>>c10;
                    switch(c10)
                    {
                        case 'Y':
                        goto main_menu;
                        break;
                    }
        break;

         case 8:
         for(int i=0;i<n;i++)
           {
               bank[i].show_all_account_Holder_names();
           }
                    char c1;
                    cout<<"Press 'Y' for go back";
                    cin>>c1;
                    switch(c1)
                    {
                        case 'Y':
                        goto main_menu;
                        break;
                    }
         break;
         
         case 9:
         cout<<"1. Name\n";
         int choice;
         cout<<"Enter your choice\n";
         cin>>choice;
                    switch(choice)
                    {
                        

                        case 1:
                        string cus_name1,cus_name2;
                        above:
                        cout<<"Enter your current name\n";
                         cin>>cus_name1;
                        for(int i=0;i<n;i++)
                        {
                        if(bank[i].name!=cus_name1)
                           {
                               cout<<"Please enter a valid name\n";
                            goto above;
                           }
                        }
                       
                        cout<<"Enter the new name\n";
                        cin>>cus_name2;
                        for(int i=0;i<n;i++)
                        {
                            if(bank[i].name==cus_name1)
                            {
                                    bank[i].name=cus_name2;
                                    bank->update_account(cus_name2);
                            }
                            else
                            {
                                cout<<"Name does not exists\n";
                            }
                        }    
                        
                        
   
                                            char c3;
                                            cout<<"\nPress 'Y' for go back";
                                            cin>>c3;
                                            switch(c3)
                                            {
                                                case 'Y':
                                                goto main_menu;
                                                break;
                                            }
                         break;
                         
                         

                         
                    }
                    break;

        case 10:
        cout<<"Enter the account details which you want to delete\n";
        long cus_acc1;
        cout<<"Enter the account number\n";
        cin>>cus_acc1;
        for(int i=0;i<n;i++)
        {
            if(bank[i].acc_no==cus_acc1)
            {
                    bank[i].acc_no=0;
                    bank[i].acc_type="Null";
                    bank[i].balance=0;
                    bank[i].name="Null";
                    bank->delete_account();
            }
            else
            {
                cout<<"Enter a valid account number\n";
            }

        }
        
                           
                           char c4;
                                cout<<"Press 'Y' for go back";
                                cin>>c4;
                                switch(c4)
                                    {
                                        case 'Y':
                                        goto main_menu;
                                        break;
                                    }
        break;

         
         case 11:
         bank->guide_lines();
         char c2;
        cout<<"Press 'Y' for go back";
        cin>>c2;
        switch(c2)
        {
            case 'Y':
            goto main_menu;
            break;
        }
         break;

         case 12:
         cout<<"Thankyou for visiting our Bank\n";
         break;

         
         default:
         cout<<"Invalid Choice!!\n";
         break;

    }
   
    
    
 

    return 0;
}