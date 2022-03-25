#include<iostream>
using namespace std;

template<class T1=int, class  T2=float>
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
    Numberof <> num(5,'A');
    num.display();

    Numberof <float,float> num1(10.5,10.5);
    num1.display();

    return 0;
}