#include<iostream>
using namespace std;

class Sum
{
    public:int a,b;
   
    Sum(int n1, int n2)
    {
      a=n1;
      b=n2;
    }
    Sum operator+(int val);
    public: int getsum()
    {
        return (a+b);
    }
};

Sum Sum::operator+(int val)
{
    return (a+b+val);
}
int main()
{
    return 0;
}