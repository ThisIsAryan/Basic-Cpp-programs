//Static variables and static functions-
#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    static void getcount(void){
        cout << "The count is " << count <<endl;
    }
    void getdata(void)
    {
        cout << "The id is " << id << endl;
    }
};

// //agar bahar lana ho to-
// void employee::getcount(void) 
//     {
//         cout << "The count is " << count <<endl;
//     }

int employee::count; //int employee::count = 1000;->to change the default value from 0 to 1000.

int main()
{
    employee aryan, abhishek, akarsh;
    aryan.setdata();
    aryan.getdata();
    aryan.getcount(); //employee::getcount();->bhi kr skte.

    abhishek.setdata();
    abhishek.getdata();
    employee::getcount();

    akarsh.setdata();
    akarsh.getdata();
    employee::getcount();

    return 0;
}