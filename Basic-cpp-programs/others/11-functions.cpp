#include<iostream>
using namespace std;
int sum(int a, int b);//function prototype.
//int sum(int, int);//ye bhi chalega.
int main()
{
    int num1, num2;
    cout<<"Enter the values of a and b respectively: "<<endl;
    cin>>num1>>num2;
    cout<<"The sum is: "<<sum(num1, num2)<<endl;//num1 and num2 are actual parameters.
    return 0;
}
int sum (int a, int b)//a and b are formal parameters.
{
    int sum = a+b;
    return sum;
}
