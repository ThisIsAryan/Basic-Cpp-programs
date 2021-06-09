#include <iostream>
#include <string.h>
using namespace std;
class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    } 
}
void binary ::ones(void) //ones compliment, 101->010
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else if (s.at(i) == '1')
            s.at(i) = '0';
    }
    cout << "The ones compliment is " << s << endl;
}
void binary ::display(void)
{
    chk_bin();//can be assessed from here
    cout<<"The binary number is: ";
    for (int i = 0; i < s.length(); i++)
        cout << s.at(i);
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    //b.chk_bin(); //can't be called coz private, assessed from display function.
    b.display();
    b.ones();
    return 0;
}