#include<iostream>
using namespace std;


class Vector
{
    public:
      int  *arr;
      int size;
      public:Vector(int m)
      {
          size=m;
          arr=new int[size];
      }

      int sumVec(Vector &v)
      { 
           int d=0;
           for(int i=0;i<size;i++)
           {
               d=d+this->arr[i]* v.arr[i];
               
           }
           return d;
      }
};
int main()
{
    Vector v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;
    Vector v2(3);  
     v2.arr[0]=4;
    v2.arr[1]=3;
    v2.arr[2]=1;
    int a=v1.sumVec(v2);
    cout<<a<<endl;  
    return 0;
}