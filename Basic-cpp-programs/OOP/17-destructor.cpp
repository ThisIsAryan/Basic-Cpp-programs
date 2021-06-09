//destrucutre
//Does not take any argument
//does not return any value.
#include<iostream>
using namespace std;
int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when comstructor is called for an object number "<<count<<endl;;
    }

    ~num(){
        cout<<"This is ths time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}