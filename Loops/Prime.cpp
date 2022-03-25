#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    cout<<"Prime number";
    else
    cout<<"Not a Prime number";
    return 0;
}