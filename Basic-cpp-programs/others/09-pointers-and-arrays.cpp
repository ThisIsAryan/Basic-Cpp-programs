// //pointers-
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=6, *ptr;
//     ptr = &a;
//     cout<<ptr<<"\t"<<*ptr<<"\t"<<*(&ptr)<<endl;
//     int**ptr2;
//     ptr2=&ptr;
//     cout<<**ptr2;
//     return 0;
// }

//arrays-
#include<iostream>
using namespace std;
int main()
{
    int *arr;
    arr = (int*)malloc(30*sizeof(int));
    cout<<"Enter values one by one"<<endl;
    for(int i=0; i<4;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is: "<<endl;
    for(int i=0; i<4;i++)
    {
        cout<<arr[i]<<endl;
    }
    int *ptr; ptr = arr;
    cout<<*(ptr)<<"\t"<<*(++ptr)<<"\t"<<(*(++ptr))<<"\t"<<(*(++ptr))<<endl;
    return 0;
}