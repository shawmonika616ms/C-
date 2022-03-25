#include<iostream>
using namespace std;

class Doctor
{
    int id;
    string name;
    float bonus=500.0f;
    float totsal;

    

    public:Doctor(int i, string n);
    public: void salary(float s);
    friend void address();
    public:void show();

  
};

Doctor::Doctor(int i, string n)
{
    id=i;
    name=n;
}
void Doctor::salary(float s)
{
     totsal=bonus+s;
}
void Doctor::show()
{
    cout<<id<<name<<totsal<<endl;
}

void address()
{
    cout<<"Block-2, Pune";
}
int main()
{
     Doctor d(1,"ramakrishna");
     d.show();
     d.salary(500.5f);
     address();
    return 0;
}