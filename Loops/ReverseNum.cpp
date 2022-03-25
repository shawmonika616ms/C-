#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,a=0,temp=0;
    cout<<"Enter the number";
    cin>>n;
    
    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    
    cout<<"Pallindrome"<<rev;

    return 0;
}