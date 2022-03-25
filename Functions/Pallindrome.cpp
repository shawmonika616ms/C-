#include<iostream>
using namespace std;
int pallindrome(int);
int main()
{
    int result=0;
    result=pallindrome(123);
    if(result==1)
      cout<<"Pallindome";
      else
      cout<<"Not";

    return 0;
}

int pallindrome(int n)
{
    int a=0,rev=0,temp=0;
    temp=n;

    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(temp==rev)
    return 1;
    else 
    return 0;
}