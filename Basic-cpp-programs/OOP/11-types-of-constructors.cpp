//Default and parameterized constructor-
#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    //complex(void);
    complex(int, int);
    void display(void){
        cout<<"The complex nummber is "<<a<<" + "<<b<<"i"<<endl;
    }
};
// complex::complex(void){
//     a= 0;
//     b= 0;
// }
complex::complex(int x, int y){
    a= x;
    b= y;
}
int main()
{
    //inplicit call:
    complex c1(4,6);
    //Explicit call:
    complex c2 = complex(5,7);
    c1.display();    
    return 0;
}