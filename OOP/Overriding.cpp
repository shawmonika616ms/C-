#include<iostream>
using namespace std;

class Book
{
    public: virtual void show()
    {
        cout<<"Parent class";
    }
};

class Book1: public Book
{
    public:void show()
    {
        cout<<"child class";
    }
};
int main()
{
    Book *ptr;
    Book1 b;
    ptr=&b;
    ptr->show();
    return 0;
}