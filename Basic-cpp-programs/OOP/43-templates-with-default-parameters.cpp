#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>
class harry
{
public:
    T1 a;
    T2 b;
    harry(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display(){
        cout<<a<<endl<<b;
    }
};
int main()
{
    harry<> obj(3, 3.14);
    obj.display();
    cout<<endl;
    harry<char, char> obj2('F' , 'U');
    obj2.display();
    return 0;
}