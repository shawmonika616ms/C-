#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:Complex()
    {
        real=0;
        imag=0;
    }
    public:Complex(int r, int i)
    {
        real=r;
        imag=i;
    }
    public:void print()
    {
        cout<<real<<imag<<endl;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

};
int main()
{
    Complex c1(4,5);
     Complex c2(7,8);
     Complex c3;
     c3=c1+c2;
    c1.print();
    return 0;
}