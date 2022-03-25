#include<iostream>

using namespace std;

class Bank
{
    public:
    int accno;
    string  name;
    static float rateofInterest;

    Bank(int a,string n)
    {
        this->accno=a;
        this->name=n;
    }
   public: void display();
};
 void Bank::display()
 {
     cout<<accno<<endl<<name<<endl<<rateofInterest<<endl;
 }

 float Bank::rateofInterest=6.5;

 int main()
 {
     Bank ob=Bank(2,"John");
     Bank ob1=Bank(1,"Doe");
     ob.display();
     ob1.display();
 }