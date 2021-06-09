//Constants, manipulators and precedence.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const float pi = 3.14;
    //pi = 6.28; ---nhi hoga
    cout<<"The value of pi is "<<pi<<endl<<endl;
    //Manipulators - endl->new line; setw(integer_value)->insures minimum spacing.
    int a = 3, b = 34, c = 345, d = 3456;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of d is: "<<d<<endl;
    cout<<endl<<"With setw -"<<endl;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    cout<<"The value of d is: "<<setw(4)<<d<<endl<<endl;
    //Operator precedence- check fromwebsite cpp reference
    int e= 4, f=5;
    cout<<e*f+45-f<<endl;
    cout<<e*(f+45)-f;
    return 0;
}