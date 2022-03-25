#include<iostream>
using namespace std;
class Book
{
    public:
    int id;
    string name;

    public:Book(int i, string n);
    public:void show();
};

Book::Book(int i, string n)
{
    id=i;
    name=n;
}
void Book::show()
{
    cout<<id<<name<<endl;
}
int main()
{
    Book b(11,"Traditional");
    Book b1(12,"Two states");
    b.show();
    b1.show();
    return 0;
}