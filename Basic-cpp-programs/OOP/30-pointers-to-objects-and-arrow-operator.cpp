//Pointers to Objects and Arrow Operator in CPP-
#include<iostream>
using namespace std;

class complex{
    int real, complex;
    public:
    void set_data(int a, int b)
    {
        real = a;
        complex = b;
    }
    void get_data()
    {
        cout<<"The real part is "<<real<<endl<<"The imaginary part is "<<complex<<endl;
    }
};
int main()
{
    complex c;
    complex *ptr = &c;
    complex *p = new complex; 
    (*ptr).set_data(1,2); //parenthesis is important.
    (*ptr).get_data();
    p->set_data(5,6);
    p->get_data();
    //array-
    complex *array = new complex[4];
    array->set_data(3,4);
    array->get_data();

    (array+1)->set_data(9,8);
    (array+1)->get_data();

    (array+2)->set_data(3,5);
    (array+2)->get_data();

    (array+3)->set_data(7,7);
    (array+3)->get_data();
    
    return 0;
}