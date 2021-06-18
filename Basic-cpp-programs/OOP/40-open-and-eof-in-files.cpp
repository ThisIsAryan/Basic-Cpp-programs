#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    //opening file using member function open-
    out.open("sample4.txt");
    out<<"This is me" << "\n" << "This is also me \nGuess what? me again !!" ;
    out.close();

    ifstream in;
    in.open("sample4.txt");
    string content;
    cout<<"The content of the file is- " << endl ;
    //Using eof in loop to print all the contents-
    while(in.eof()==0)
    {
    getline(in, content);
    cout << content << endl;
    }
    in.close();
    return 0;
}