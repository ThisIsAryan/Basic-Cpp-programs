// Structures, Unions and enums-
#include<iostream>
using namespace std;
typedef struct employee
{
    int id;
    float salary;
    char name[50];
    //total - more than 9 bytes.
}emp;
union money
{
    int rice; //4 bytes
    char car; //1 bytes
    float pounds; //4 bytes
    //total - 4 bytes
};
int main()
{
    emp *e1;
    e1 = (emp*)malloc(30*sizeof(emp));
    cout<<"Enter name: "<<endl;
    cin>>e1[0].name;
    cout<<e1[0].name<<endl;
    money m1;//C++ m typedef na ho union money m1 nahi likhna pdta, money m1 is enough.
    m1.rice= 34;
    m1.car= 'H';
    cout<<m1.car<<"\n"<<m1.rice<<endl;//m1.rice ki sahi value print nhi hoga(koi garbage value dedega).
    //enum- 
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast<<"\t"<<lunch<<"\t"<<dinner<<endl;//prints- 0  1  2
    meal f1 = dinner;
    cout<<f1<<"\t"<<(f1==1); //prints 2 0;
    return 0;
}