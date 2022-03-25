#include<iostream>
using namespace std;

template<class T1, class T2>
class Numberof
{
    public:
    T1 data;
    T2 data1 ;

    Numberof(T1 a, T2 b)
    {
        data=a;
        data1=b;
    }
    public:
    void display()
    {
     cout<<data<<data1<<endl;
    }
};
int main()
{
    Numberof <int,char> num(5,'A');
    num.display();
    return 0;
}