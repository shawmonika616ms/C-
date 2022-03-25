#include<iostream>
using namespace std;

class Animal
{
    public:virtual void sound()=0;
    void sleeping()
    {
        cout<<"Sleeping";
    }
};

class Dog:public Animal
{
    public:void sound()
    {
        cout<<"Sounding";
    }
};
int main()
{
    Dog d;
    d.sleeping();
    d.sound();
    return 0;
}