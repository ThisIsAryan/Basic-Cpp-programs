#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class Derived: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "Derived"
// };

class base1
{
protected:
    int base1int;

public:
    void set_base1(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2(int a)
    {
        base2int = a;
    }
};

class base3
{
protected:
    int base3int;

public:
    void set_base3(int a)
    {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base 1 is " << base1int << endl
             << "The value of base 2 is " << base2int << endl
             << "The value of base 3 is " << base3int << endl
             << "The sum is " << (base1int + base2int + base3int) << endl;
    }
};

int main()
{
    derived harry;
    harry.set_base1(5);
    harry.set_base2(10);
    harry.set_base3(15);
    harry.show();
    return 0;
}

/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/