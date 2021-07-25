#include<iostream>
using namespace std;
void swapC(int *a, int *b)//swap won't work in call by value.
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Call by reference using C++ way-
void swapCpp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int & refreturn(int &a, int &b)
{
    a=b;
    return a;
}
int main()
{
    int x,y;
    cout<<"Enter values of x and y\n";
    cin>>x>>y;
    //swapC(&x,&y);
    swapCpp(x,y);
    cout<<"The value after swap is:\nx = "<<x<<" and y = "<<y<<endl;
    refreturn(x, y) = 45;
    cout<<"After using refreturn, value of x: "<<x<<" and value of y: "<<y<<endl;//x will be 45.
    return 0;
}