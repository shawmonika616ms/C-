#include<iostream>
using namespace std;

class Test
{
    private:
    int num;

    public: Test()
    {
        num=8;
    }

    void operator++()
    {
        num=num+2;
    }

    void show()
    {
        cout<<num;
    }
};
int main()
{
    Test test;
    ++test;
    test.show();
    return 0;
}