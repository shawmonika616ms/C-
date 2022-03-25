#include<iostream>
using namespace std;

class Caps
{
    int a;
    public:void set(int x)
    {
        a=x;
    }
    
    public:int get()
    {
        return a;
    }

};
int main()
{
    Caps c;
    c.set(5);
    cout<<c.get();
    return 0;
}