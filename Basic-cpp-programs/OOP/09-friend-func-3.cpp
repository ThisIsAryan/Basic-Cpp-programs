//Pass by reference in function using class-
#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchangepointer(c1 *, c2 *);
    friend void exchangereference(c1 &, c2 &);
public:
    void data(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchangepointer(c1 *, c2 *);
    friend void exchangereference(c1 &, c2 &);
public:
    void data(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
//Using pointer
void exchangepointer(c1 *x, c2 *y)
{
    int temp = x->val1;
    x->val1 = y->val2;
    y->val2 = temp;
}
//Using reference-
void exchangereference(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main() 
{
    c1 oc1;
    c2 oc2;
    oc1.data(5);
    oc2.data(10);
    cout<<"Value of oc1 before exchange: ";
    oc1.display();
    cout<<"Value of oc2 before exchange: ";
    oc2.display();
    cout<<"Using pointer: "<<endl;
    exchangepointer(&oc1, &oc2);
    cout<<"Value of oc1 after exchange: ";
    oc1.display();
    cout<<"Value of oc2 after exchange: ";
    oc2.display();
    cout<<"Using reference: "<<endl;
    exchangereference(oc1, oc2);
    cout<<"Value of oc1 after exchange: ";
    oc1.display();
    cout<<"Value of oc2 after exchange: ";
    oc2.display();
    return 0;
}