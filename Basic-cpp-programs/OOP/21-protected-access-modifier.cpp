#include<iostream>
using namespace std;

class base{
    protected:
        int a;
    private:
        int b;
    public:
        int c = 3;

};

/*
For a protected member:
                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/

class derived : public base //class derived : protected base - to make it protected
{

};
int main()
{
    base b;
    derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    cout<<d.c; //public member, public derivation->access kr skte.
    return 0;
}


