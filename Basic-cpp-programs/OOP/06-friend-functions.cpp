#include<iostream>
using namespace std;
class complex{
    int a, b;
    friend complex sum(complex o1, complex o2);
    public:
    void setnumber(int n1, int n2)
    {
        a = n1; 
        b = n2;
    }
    void displaynumber()
    {
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }
    //complex sum(complex o1, complex o2);
};
//complex complex :: sum(complex o1, complex o2)
complex sum(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex a1,a2, c;
    a1.setnumber(5,3);
    a1.displaynumber();

    a2.setnumber(7,4);
    a2.displaynumber();

    //c = c.sum(a1, a2);
    c = sum(a1, a2);
    c.displaynumber();

    return 0;
}