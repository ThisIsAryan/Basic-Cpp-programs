//Ambiguity Resolution in Inheritance in C++
#include<iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"Good morning!!"<<endl;
    }
};

class base2{
    public:
    void greet(){
        cout<<"Good afternoon!!"<<endl;
    }
};

class derived : public base1, public base2{
    int a;
    public:
    void greet(){
    base1 :: greet(); //In case of ambiguity, base1 greet will execute.
    }
};

class B{
    public:
    void say(){
        cout<<"Hello World"<<endl;
    }
};

class D : public B{
    public:
    void say(){
        cout<<"Hello Friends"<<endl;
    }
        // D's new say() method will override base class's say() method
};
int main()
{
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();
    derived d;
    d.greet();
    B a;
    D b;
    a.say();
    b.say();
    return 0;
}