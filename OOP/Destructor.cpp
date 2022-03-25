#include<iostream>
using namespace std;
class Destructor
{
    public:Destructor()
    {
        cout<<"Constructor";
    }

    ~Destructor()
    {
        cout<<"Destructor";
    }
};
int main()
{
    Destructor d;
    return 0;
}