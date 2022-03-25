#include<iostream>
using namespace std;

class Sum
{
    private:
    int a,b,c;

    public:void sum(int x,int y)
    {
          a=x;
          b=y;
          c=a+b;
          cout<<c;
    }
};
int main()
{
    Sum s;
    s.sum(10,20);
    return 0;
}