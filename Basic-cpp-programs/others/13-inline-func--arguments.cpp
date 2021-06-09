// //static variable.
// #include<iostream>
// using namespace std;
// int product(int a, int b)
// {
//     static int c = 0;//this executes only once.
//     c = c+1;
//     return a*b + c;
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter the values of a and b\n";
//     cin>>a>>b;//say a = 2, b=3.
//     cout<<"The value of a*b= "<<product(a,b)<<endl; //returns 7
//     cout<<"The value of a*b= "<<product(a,b)<<endl; //returns 8
//     cout<<"The value of a*b= "<<product(a,b)<<endl; //returns 9
//     cout<<"The value of a*b= "<<product(a,b)<<endl; //returns 10
//     return 0;
// }

// // default argument-
// #include<iostream>
// using namespace std;
// float money1(int current, float factor = 1.04)
// {
//     return current*factor;
// }
// float money2(int current, const float factor = 1.04)
// {
//     //factor = 1.10;//function k andr nahi change kr skte
//     return current*factor;
// }
// int main()
// {
//     float mon;
//     cout<<"Enter current amount: "<<endl;
//     cin>>mon;
//     cout<<"Amount after 1 year is: "<<money1(mon)<<endl;
//     cout<<"If interest is 10% instead of 4%, amount after 1 year: "<<money1(mon,1.10)<<endl;//default argument will be changed.
//     cout<<"Amount after 1 year is: "<<money2(mon)<<endl;
//     cout<<"If interest is 20% instead of 4%, amount after 1 year: "<<money2(mon,1.10)<<endl;//yahan se const argument bhi change kr skte.
//     return 0;
// }

//inline function
#include<iostream>
using namespace std;
inline int product(int a, int b)
{
    return a*b;
}
// inline replaces product(x,y) in main function with x*y; 
int main()
{
    int a,b;
    cout<<"Enter the values of a and b\n";
    cin>>a>>b;//say a = 2, b=3.
    cout<<"The value of a*b= "<<product(a,b)<<endl; //returns 7
    cout<<"The value of a*b= "<<product(a,b)<<endl; //returns 8
    cout<<"The value of a*b= "<<product(a,b)<<endl; //returns 9
    cout<<"The value of a*b= "<<product(a,b)<<endl; //returns 10
    return 0;
}