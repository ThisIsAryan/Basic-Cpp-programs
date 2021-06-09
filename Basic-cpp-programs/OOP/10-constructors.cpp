//Constructors in C++ -
#include<iostream>
using namespace std;
class complex{
    int a, b;
    //creating a consturctor-
    public:
    complex(void); //constructor
    void printnumber(void){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(void) //default constructor.
{ 
    a = 0;
    b = 0;//isse default value har object ki 0 + oi hogi.
}
int main()
{
    complex c1;
    c1.printnumber();    
    return 0;
}