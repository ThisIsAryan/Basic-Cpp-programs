//Array of Objects Using Pointers in C++
#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void set_data(int a, float b)
    {
        id = a;
        price = b;
    }
    void get_data()
    {
        cout << "Id of the item is " << id << endl
             << "and Price is " << price << endl;
    }
};

    int main()
    {
        // int *ptr = &size;
        // int *ptr = new int [34];

        int size = 2;
        shop *ptr = new shop [size];
        shop *ptrTemp = ptr; //ptr => &ptr[0]

        // 1. general store item
        // 2. veggies item
        // 3. hardware item

        int p; float q; //p->id, q->price
        for(int i = 0; i<size; i++)
        {
            cout<<"Enter Id and price of item"<<(i+1)<<endl;
            cin>>p>>q;
            ptr->set_data(p,q);
            ptr++;
        }
        for(int i = 0; i<size; i++)
        {
            cout<<"Item number "<<i<<endl;
            ptrTemp->get_data();
            ptrTemp++;
        }
        return 0;
    }
    //Why ptrTemp-
        // 1 2 3
        //     ^
        //     |
        //     |
        //     ptr
        // ptrTemp