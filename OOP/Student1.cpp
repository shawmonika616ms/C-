#include<iostream>
using namespace std;

class Student1
{
    public:
    int id;
    string name;

    public: void insert(int i,string n)
    {
        id=i;
        name=n;
    }

    public: void show()
    {
        cout<<id<<name<<endl;
    }
};
int main()
{
    Student1 s1;
    s1.insert(101,"John");
    s1.show();
    return 0;
}