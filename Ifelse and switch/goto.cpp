#include<iostream>
using namespace std;
int main()
{

    ineligible:
        cout<<"you are not eligible to vote";
    int age;
    cout<<"Enter your age";
    cin>>age;
    if(age<18)
       goto ineligible;
    else
    cout<<"You are eligible to vote";
    return 0;
}