//Multilevel Inherentance-
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};
void student::set_roll_no(int a)
{
    roll_no = a;
}
void student::get_roll_no()
{
    cout << "The roll number is " << roll_no << endl;
}

class exam : public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float a, float b){
        maths = a;
        physics = b;
    }
    void get_marks(){
        cout<<"Physics marks: "<<physics<<endl
        <<"Maths marks: "<<maths<<endl;
    }
};

class result : public exam{
    float percentage;
    public:
    void display_result(){
        get_roll_no();
        get_marks();
        cout<<"Your percentage is "<<((maths + physics)/2)<<endl;
    }
};

int main()
{
    result aryan;
    aryan.set_roll_no(420);
    aryan.set_marks(98, 95.5);
    aryan.displa_resulty();
    return 0;
}

 /*
Notes: 
    If we are inheriting B from A and C from B:[ A--->B--->C ]
    1. A is the base class for B and B is the base class for C
    2. A-->B-->C is called Inheritance Path
*/