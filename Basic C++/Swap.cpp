#include<iostream>
using namespace std;
int main()
{
    //using 3rd variable
    // int a,b,c;
    // cout<<"Enter the two numbers";
    // cin>>a>>b;
    // c=a;
    // a=b;
    // b=c;
    // cout<<"Value after swapping"<<a<<endl<<b;

    //without using 3rd variable

    int a,b;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    a=a+b; //9
    b=a-b; //b=4
    a=a-b;
    cout<<"value after swapping"<<a<<b;

}