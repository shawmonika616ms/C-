#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cout<<"Enter the number";
    cin>>n;
    a=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    cout<<a<<endl<<n<<endl;
    return 0;
}