#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    friend void add(X o1, Y o2);//Y kya h batane k liye forwar declaration.
    public:
    void setvalue(int value){
        data = value;
    }
};
class Y{
    int num;
    friend void add(X o1, Y o2);
    public:
    void setvalue(int value){
        num = value;
    }
};
void add(X o1, Y o2)
{
    cout<<"The sum of X and Y objects gives: "<<(o1.data + o2.num);
}
int main()
{
    X a1;
    Y b1;
    a1.setvalue(6);
    b1.setvalue(4);
    add(a1, b1);
    return 0;
}