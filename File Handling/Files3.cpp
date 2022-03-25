#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream out;
    out.open("Sample3.txt");
    out<<"This is me"; 
    out<<"Hi, there\n";
    out<<"Bye";
    out.close();


    ifstream in;
    string st,st2;
    in.open("Sample3.txt");
    // in>>st>>st2;
    // cout<<st<<st2;
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;

    }
    return 0;
}