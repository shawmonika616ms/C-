#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}