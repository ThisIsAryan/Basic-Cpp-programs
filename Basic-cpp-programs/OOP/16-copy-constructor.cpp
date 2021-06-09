#include<iostream>
using namespace std;
class number{
    int a = 0;
    public:
    number(){}
    number(int num){
        a = num;
    }
// When no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj){
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"The number is "<<a<<endl;
    }
};
int main()
{
    number x, y, n(9), z;
    x.display();
    n.display();

    z = x; // Copy constructor not called (not called!!!!!)
    z.display();

    number z1(x); // Copy constructor called
    z1.display();    

    number z2 = n; // Copy constructor called
    z2.display();

    return 0;
}