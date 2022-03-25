#include<iostream>
using namespace std;

class Home
{
      int i=1;
      string name="sohan";

    public:void show()
    {
        cout<<i<<name<<endl;
    }
};

class House
{
      int i=2;
      string name="Mohan";

    public:void show()
    {
        cout<<i<<name<<endl;
    }
};

class Child:Home,House
{
    int i=3;
      string name="sohini";

    public:void show1()
    {
        cout<<i<<name<<endl;
        House::show();
    }

};
int main()
{
    
   Child c;
  
   c.show1(); 
    return 0;
}