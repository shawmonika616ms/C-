#include<iostream>
using namespace std;
int main()
{
    int n,a=0,sum=0;
    cout<<"Enter the number";
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout<<sum;
    return 0;
}