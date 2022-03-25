#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     //connecting our file with out stream
    //  ofstream out("Sample3.txt");
    //  cout<<"Enter your name";
    //  string name;
    //  cin>>name;
    //  out<<"your name is"+name;
   



     ifstream in("Sample3.txt");
     string content;
     getline(in,content);
     cout<<content;
    return 0;
}  