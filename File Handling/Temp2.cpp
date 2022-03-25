#include<iostream>
using namespace std;
template <class A>
class Number
{
    T n;
    public:Number(T n1)
    {
        n=n1;
    }
    T getNum()
    {
        return n;
    }
};
int main()
{
    Number<int> num(7);
    int c=num.getNum();
    cout<<c<<endl;
    Number<int> num(7.5);
    double c1=num.getNum();
    cout<<c1<<endl;
    return 0;
}