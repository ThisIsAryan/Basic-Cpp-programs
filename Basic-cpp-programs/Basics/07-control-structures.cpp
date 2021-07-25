#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Age= ?"<<endl;
    cin>>age;
    // //if-else-
    // if(age<18 || age>50)
    // cout<<"You can not come to the party.";
    // else
    // cout<<"You can come to the party.";
    //Switch case-
    switch (age)
    {
    case 18:
        cout<<"you are 18.";
        break;
    case 21:
        cout<<"you are 21.";
        break;
    default:
        cout<<"You are neither 18 nor 21.";
    }
    return 0;
}