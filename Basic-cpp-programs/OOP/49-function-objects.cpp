#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
    //Function objects (Functor) are functions wrapped in a class so that it is available like an object.
    int arr[] = {2, 5, 3, 6, 1, 100};

    sort(arr, arr + 5); //sorts first 5 elements

    for(int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<"  ";
    }

    cout<<endl;

    sort( arr, arr + 6, greater<int>() ); //reverse sort using function object greater<int>() 

    for(int j = 0; j < 6; j++)
    {
        cout<<arr[j]<<"  ";
    }

    return 0;
}