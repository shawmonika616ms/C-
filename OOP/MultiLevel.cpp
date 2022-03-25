#include<iostream>
using namespace std;
class Animal
{
    int id;
    string name;
    int bonus=70;
    public:
     Animal(int i, string n);
     void color(string col);
     void show();
     friend void price(Animal p);
};

Animal:: Animal(int i, string n)
{
    id=i;
    name=n;
}


void Animal::show()
{
    cout<<id<<name<<endl;
}

void Animal::color(string col)
{
   cout<<col;
}

void price(Animal p)
{
    cout<<p.bonus<<endl;
}


class Voice:public Animal
{
       public:
      
         Voice():Animal(1,"Dog")
         {

         }
         
        void sound(string s);

};

void Voice::sound(string s)

{
    cout<<s<<endl;
}
int main()
{
   Voice v;
   v.color("red");
   v.sound("Bark");
   v.show();
   price(v);
   

  

   
     
    
    
    return 0;
}