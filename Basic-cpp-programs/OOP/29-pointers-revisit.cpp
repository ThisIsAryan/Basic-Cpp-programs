#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    *ptr = 8;
    cout << "The value of a is " << *ptr << endl;

    //New operator:
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    //dynamically creating array.
    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    cout << arr[0] << "\t" << arr[1] << "\t" << arr[2] << endl;

    // delete operator-

    delete p;
    cout << "The value at address p is " << *(p) << endl; //garbage value
    delete[] arr;
    cout << arr[0] << "\t" << arr[1] << "\t" << arr[2] << endl; //sab delete....jo dena hoga dega.

    return 0;
}