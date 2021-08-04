//sorting, binary search and important array algorithms-
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;
void show(int arr[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int array[] = {2, 1, 5, 2, 4, 1, 8, 3};
    int array_size = sizeof(array) / sizeof(array[0]);
    show(array, array_size);
    //sorting-
    sort(array, array + array_size);
    
    show(array, array_size);
    //Binary Search (array has to be sorted)-
    cout << binary_search(array, array + array_size, 5) << endl; //returns 1(true).

    //array algorithms-
    all_of(array, array + array_size, [](int x){return x>0; })?
    cout<<"All elements greater than 0" : 
    cout<<"Not all elemennts greater than 0";
    return 0;
}