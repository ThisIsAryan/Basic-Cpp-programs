//this Pointer in C++
#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A & set_data(int a)
    //void set_data(int a)
    {
        this->a = a;
        return *this;
    }
    // this is a keyword which is a pointer which points to the object which invokes the member function
    void get_data()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a; int c;
    //a.set_data(10);
    //a.get_data();
    a.set_data(20).get_data(); //coz a.set_data(10) ne a return kiya.
    return 0;
}