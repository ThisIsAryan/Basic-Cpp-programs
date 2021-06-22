
// //Without using templates-
// #include <iostream>
// using namespace std;
// class vector
// {
//     int size;
// public:
//     int *arr;
//     vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     int dotProduct(vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };
// int main()
// {
//     vector v1(3);
//     v1.arr[0] = 3;
//     v1.arr[1] = 4;
//     v1.arr[2] = 5;
//     vector v2(3);
//     v2.arr[0] = 10;
//     v2.arr[1] = 11;
//     v2.arr[2] = 12;
//     int dp = v1.dotProduct(v2);
//     cout<<"The dot product is "<<dp<<endl;
//     return 0;
// }

//Using templates- 

#include <iostream>
using namespace std;
// jahan T hoga usse int, float, char.....se replace kr skte h. 
template<class T> 
class vector
{
    int size;
public:
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector <float> v1(3); //T => float
    v1.arr[0] = 3;
    v1.arr[1] = 4;
    v1.arr[2] = 5;
    vector <float> v2(3); //Make sure both are float....
    v2.arr[0] = 10.5;
    v2.arr[1] = 11.5;
    v2.arr[2] = 12.5;
    float d = v1.dotProduct(v2);
    cout<<"The dot product is "<<d<<endl;
    return 0;
}

