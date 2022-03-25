#include<iostream>
#include<fstream>

/* The  useful classes for working with files in c++ are:
1. fstreambase
2. ifstream -> derived from fstreambase
3.ofstream -> derived from fstreambase
*/ 


//In order to work with files in c++, you have to open it, there are two ways to open a file:
//1. Using the constructor
//2. using the member function open() the class



using namespace std;
int main()
{//opening file and writing in it
    string name="John";
    //opening files using constructor
    ofstream out("Sample.txt");
    out<<name;
// opening file and reading it
     string st;
     ifstream in("Sample2.txt");
    getline(in,st); 
     cout<<st;
    return 0;
}