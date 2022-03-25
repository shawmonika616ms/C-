#include<iostream>
using namespace std;

class Student
{
    int id=101;

    public : void show()
    {
        cout<<id;
    }
};
class Student1:virtual public Student
{
    public: int roll=101;

    public : void show1()
    {
        cout<<roll;
    }
};

 class Student2: virtual public Student
{
    int cls=8;

    public : void show2()
    {
        cout<<cls;
    }
};

class Student3:public Student1, public Student2
{
    string name="sohan";

    public : void show3()
    {
        cout<<name;
    }
};
int main()
{
    Student3 s;
    s.show();
    s.show1();
    s.show2();
    s.show3();
    return 0;
}