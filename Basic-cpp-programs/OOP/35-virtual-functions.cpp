#include <iostream>
using namespace std;
/*
we have used the “virtual” keyword with the “display” function of the base class to make is virtual function so 
when the display function is called by using the base class pointer the display function of the derived class 
will run because the base class pointer is pointing to the derived class object.
*/
class base_class
{
public:
    int var_base = 1;
    virtual void display() //NOTE - virtual !!!!!
    {
        cout << "1 displaying base class variable of value " << var_base << endl;
    }
};
class derived_class : public base_class
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 displaying base class variable of value " << var_base << endl;
        cout << "2 displaying derived class variable of value " << var_derived << endl;
    }
};
int main() 
{
    base_class* base_class_pointer;
    base_class obj_base_class;
    derived_class obj_derived_class;
    base_class_pointer = &obj_derived_class;
    base_class_pointer->display();
    return 0;
}