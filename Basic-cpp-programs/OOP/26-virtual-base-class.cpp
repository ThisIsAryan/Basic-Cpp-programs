#include <iostream>
using namespace std;
/*
Inheritance:
student -->test [Done]
student-->sports [Done]
test --> result [Done]
sports --> result [Done]
*/

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void get_number()
    {
        cout << "Roll number is " << roll_no << endl;
    }
};

class test : virtual public student // add virtual to remove any ambiguity.
{
protected:
    float maths, physics;

public:
    void set_marks(int a, int b)
    {
        maths = a;
        physics = b;
    }
    void get_marks()
    {
        cout << "Physics marks = " << physics << " and maths marks = " << maths << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(int a)
    {
        score = a;
    }
    void get_score()
    {
        cout << "Sports score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void get_total()
    {
        cout << "Your total score is " << endl
             << "Test total = " << (maths + physics) << endl
             << "Sports score = " << score << endl
             << "Grand total = " << (maths + physics + score) << endl;
        ;
    }
};

int main()
{
    result aryan;
    aryan.set_number(19); //roll_no ek jagah se liya coz of virtual base class.
    aryan.get_number();
    aryan.set_marks(40, 30);
    aryan.get_marks();
    aryan.set_score(45);
    aryan.get_score();
    aryan.get_total();
    return 0;
}

//Note- virtual student is same as student virtual.