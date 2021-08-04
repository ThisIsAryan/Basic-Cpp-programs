#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> a = {1, 2, 3, 4, 5};
    cout << a.size() << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "First element = " << a.front() << endl;
    cout << "Last element = " << a.back() << endl;
    cout << "Element at third position = " << a.at(2) << endl;
    cout << "Empty or not = " << a.empty() << endl;
}