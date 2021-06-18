#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // connecting our file with hout stream
    ofstream hout("sample3.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);

    // writing a string to the file
    hout<<"My name is " + name;

    //closing the file-
    hout.close();

    //Now, let's read the above file-
    ifstream hin("sample3.txt");
    string content;
    getline(hin, content);
    cout<<"The content of this file is - "<<endl;
    cout<<content;
    return 0;
}