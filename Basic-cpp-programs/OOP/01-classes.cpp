#include<iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1, int b1, int c1);//Declaration.
    void getData()//Declaration and execution.
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    }
};
void employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
};
int main()
{
    employee Harry;
    //Harry.a = 2; //can't be done as it is private data.
    Harry.setData(1,2,4);
    Harry.d = 34;
    Harry.e = 39;
    Harry.getData();
    return 0;
}