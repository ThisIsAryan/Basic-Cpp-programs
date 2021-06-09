#include <iostream>
using namespace std;
//Base class-
class employee
{
public:
    int id; //make public to inherit
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    employee() {}
};

//Derived class-
/*
cass {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc.
}
*/
//Note- Default visibility mode is private.
//Note- Public visibility mode- Public members of the base class becomes public members of derived class.
//Note- Private visibility mode- Public members of the base class becomes private members of the derived class.
//creating a programmer class derived from employee base class
//Note- Private members are never inherited.

class programmer : public employee
{
public:
    int languageCode; 
    programmer(int Id)
    {
        id = Id;
        languageCode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee aryan(1), akarsh(2);
    cout << aryan.salary << endl;
    cout << akarsh.salary << endl;
    programmer skillF(1);
    cout << skillF.languageCode << endl;
    cout<<skillF.salary<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();
    return 0;
}