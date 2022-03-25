#include<iostream>
using namespace std;
int main()
{
    int num=20;
    int *p;
    p=&num;

    cout<<"Address of num variable"<<&num<<endl;
    cout<<"Address of p variable"<<p<<endl;
    cout<<"Value of p variable"<<*p<<endl;
    return 0;
}