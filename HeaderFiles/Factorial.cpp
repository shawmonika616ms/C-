#include<iostream>

#include "Factorial.h"
int Fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        
    }
    return f;
}
