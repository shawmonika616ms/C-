#include<iostream>
using namespace std;

class Mul
{
    public:
    int a, b,m=0;
    
    Mul(int n1,int n2)
    {
        a=n1;
        b=n2;
    }

    public: void cal()
    {
       m=a*b;
    }
    public: void show()
    {
        cout<<m<<endl;
    }

};

