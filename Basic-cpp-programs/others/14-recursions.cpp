#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    return a*fact(a-1);
}
int fibbo(int a){
    if(a<1)
    return 0;
    if(a==1)
    return 1;
    return fibbo(a-1) + fibbo(a-2);
}
int main()
{
    int n;
    cout<<"Enter a whole number: "<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;
    cout<<"The "<<n<<"th element of fibbonacci series is: "<<fibbo(n)<<endl;
    return 0;
}