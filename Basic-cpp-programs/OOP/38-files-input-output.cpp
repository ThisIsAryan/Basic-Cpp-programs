//File I/O in C++: Reading and Writing Files-
#include <iostream>
#include <fstream>
using namespace std;
/*
These are some useful classes for working with files in C++

1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/*
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

1. Using the constructor
2. Using the member function open() of the class
*/
int main()
{
    string st = "Harry Bhai";
    string st2;
    //opening files using constructor and writing to it.
    ofstream out("sample.txt"); //Write operation.
    out << st;

    //opening files using constructor and reading it.
    ifstream in("sample2.txt"); //Write operation.   //ifstream aryan("sample.txt");
    //in>>st2;
    getline(in, st2);
    cout << st2;

    cout << endl;

    getline(in, st2);
    cout << st2;

    return 0;
}
//in and out are just object names....it can be anything else.