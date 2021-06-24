#include<iostream>
using namespace std;
// float funcAvg(int a, int b)
// {
//     float avg = (a+b)/2.0; //(float)(a+b)
//     return avg;
// }
template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    float avg = (a+b)/2.0; //(float)(a+b)/2
    return avg;
}
template <class T>
void swap(T &e, T &f)
{
    T temp = e;
    e = f;
    f = temp;
}
int main()
{
    float a = funcAvg(3,4);
    cout<<a<<endl;
    int b = 9, c = 7;
    swap(b, c);
    cout<<b<<endl<<c;
    return 0;
}

