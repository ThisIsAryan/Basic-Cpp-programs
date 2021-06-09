//Inheritance in C++ -
#include <iostream>
using namespace std;
class employee
{
    int data;
    string comp;

public:
    void getdata()
    {
        cout << "The data is: " << data << " and the company is " << comp << endl;
    }
    ~employee()
    {
        cout << "The object's code block has ended" << endl;
    }
    employee(int a, string company = "Amazon")
    {
        data = a;
        comp = company;
    }
    employee(){}
};
int main() 
{
    employee aryan(10);
    employee akarsh = employee(30, "google");
    {
        employee abhinav(20, "facebook");
        cout<<"For abhinav: "<<endl;
        abhinav.getdata();
    }
    cout<<"Back to main()"<<endl;
    aryan.getdata();
    akarsh.getdata();
    return 0;
}