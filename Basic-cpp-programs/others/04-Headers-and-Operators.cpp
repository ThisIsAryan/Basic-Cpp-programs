#include<iostream>//system header file.
#include "this.h"//user defined header file.
using namespace std;
int main()
{
    int a =9, b = 4; 
    cout<<"Oprators in C++"<<endl;

    //arithmatic operators.
    cout<<endl<<"Arurhmatic Oprators in C++"<<endl;
    cout<<"a+b = "<<a+b<<endl;
    cout<<"a-b = "<<a-b <<endl;
    cout<<"a/b = "<<a/b<<endl;
    cout<<"a*b = "<<a*b<<endl;
    cout<<"a%b = "<<a%b<<endl;
    cout<<"a++ = "<<a++<<endl;
    cout<<"a-- = "<<a--<<endl;
    cout<<"++a = "<<++a<<endl;
    cout<<"--a = "<<--a<<endl;
    cout<<endl<<endl;

    //assignment operators-
    //int n = 3; char c = 'p';

    //comparison operators-
    cout<<"Comparison Oprators in C++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;//returns 0;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl<<endl;

    //Logical operations-
    cout<<"Logical operations"<<endl;
    cout<<"(a!=b)&&(a>=b) is "<<((a!=b)&&(a>=b))<<endl;
    cout<<"(a>=b)&&(a==b) is "<<((a>=b)&&(a==b))<<endl;
    cout<<"(a<=b)||(>==b) is "<<((a<=b)||(a>=b))<<endl;
    
    return 0;
}