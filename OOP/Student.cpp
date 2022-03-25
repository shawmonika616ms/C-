#include<iostream>
using namespace std;

class Student
{
    public:
    int id=101;
    string name="John";
};
int main()
{
    Student s;
    cout<<s.id;
    cout<<s.name;
    return 0;
}