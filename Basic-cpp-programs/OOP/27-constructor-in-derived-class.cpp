#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor called" << endl;
    }
    //base1(){}
    void printdatabase1()
    {
        cout << "Data 1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int a)
    {
        data2 = a;
        cout << "Base2 class constructor called" << endl;
    }
    //base2(){}
    void printdatabase2()
    {
        cout << "Data 2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    //derived(){}
    void printdataderived()
    {
        cout << "Derived1 is " << derived1
             << endl
             << "Derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived aryan(1,2,3,4);
    //aryan = derived(2,3,4,5);
    aryan.printdatabase1();
    aryan.printdatabase2();
    aryan.printdataderived();
}