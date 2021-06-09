//array of abjects and passing of objects to a function.
#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void getcomplex(){
        cout<<"Enter the x coordinate: "<<endl;
        cin>>a;
        cout<<"Enter the y coordinate: "<<endl;
        cin>>b;
    }
    void display();
    void sumcomplex ( complex o1, complex o2)//takes objects as arguments.
    {
        cout<<"The sum of complex numbers is "<<(o1.a + o2.a)<<" + "<<(o1.b + o2.b)<<"i"<<endl;    
    }
};
void complex::display(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}
int main()
{
    complex x[2], sum; // x[2] is an array of objects.
    for(int i=0; i<2; i++)
    {
        x[i].getcomplex();
        x[i].display();
    }
    sum.sumcomplex(x[0], x[1]);
    return 0;
}