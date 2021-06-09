// //Friend classes and menber friend functions-
// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;
//     friend class calculator;
// public:
//     void setvalue(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void display()
//     {
//         cout << "The complex number is " << a << " + " << b << "i" << endl;
//     }
// };
// class calculator
// {
// public:
// int sumreal(complex o1, complex o2)
// {
//     return (o1.a + o2.a);
// }
// int sumcomplex(complex o1, complex o2)
// {
//     return (o1.b + o2.b);
// }

// };

// int main(){
//     complex c1, c2;
//     c1.setvalue(5,3);
//     c2.setvalue(6,7);
//     calculator x;
//     int real = x.sumreal(c1, c2);
//     int com = x.sumcomplex(c1, c2);
//     c1.display();
//     c2.display();
//     cout<<"The sum of the complex numbers is "<<real<<" + "<<com<<"i"<<endl;
// }

//Friend classes and menber friend functions-
#include <iostream>
using namespace std;
//forward declaration:
class complex;
class calculator
{
public:
    int sumreal(complex, complex);
    int sumcomplex(complex, complex);
};

class complex
{
    int a, b;
    //friend int Calculator::sumComplex(Complex, Complex);
    //friend int calculator::sumreal(complex o1, complex o2);
    friend class calculator;
public:
    void setvalue(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator :: sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator :: sumcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main(){
    complex c1, c2;
    c1.setvalue(5,3);
    c2.setvalue(6,7);
    calculator x;
    int real = x.sumreal(c1, c2);
    int com = x.sumcomplex(c1, c2);
    c1.display();
    c2.display();
    cout<<"The sum of the complex numbers is "<<real<<" + "<<com<<"i"<<endl;
}