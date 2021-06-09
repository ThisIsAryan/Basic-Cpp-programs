//Default arguments in constructor in C++:
#include<iostream>
using namespace std;
class sample{
    int data1;
    int data2;
    public:
    sample(int x, int y = 9)
    {
        data1 = x;
        data2 = y;
    }
    void display();
};
void sample::display()
{
    cout<<"The data 1 is "<<data1<<" and data 2 is "<<data2<<endl;
}
int main()
{
    sample s1(4,5);//4 and 5 display hoga
    s1.display();
    sample s2(2);
    s2.display();
    return 0;
}