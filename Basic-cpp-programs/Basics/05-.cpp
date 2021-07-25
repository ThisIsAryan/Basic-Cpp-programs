// //******scope resolution operator*********
// #include<iostream>
// using namespace std;
// int sum = 20;
// int main()
// {
//     int a,b,c, sum;
//     cout<<"Enter the values of a, b, c: "<<endl;
//     cin>>a>>b>>c;
//     sum = a+b+c;
//     cout<<"The value of a is "<<a<<", b is "<<b<<" and c is "<<c<<endl<<"The sum is: "<<sum<<endl;
//     cout<<"The global sum is: "<<::sum;
//     return 0;
// }

// // ************float, double and long double  literals**********
// #include<iostream>
// using namespace std;
// int main()
// {
//     float a = 34.4;
//     long double b = 34.4;
//     cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;    
//     cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;    
//     cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;    
//     cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;    
//     cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;    
//     return 0;
// }

// //********Reference variables**********(Aryan->shanu->shaan->The_indelible)
// #include<iostream>
// using namespace std;
// int main()
// {
//     float x = 45.5f;
//     float &y = x; //y and x will point to the same value.
//     cout<<"x is "<<x<<endl;
//     cout<<"y is "<<y<<endl;
//     return 0;
// }

//********Typecasting**********
#include<iostream>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    cout<<"The value of a+b is "<<float(a+b)<<endl;
    cout<<"The value of a+b is "<<(float)a+b<<endl;
    cout<<"The value of a+b is "<<(float)(a+b)<<endl;
    cout<<"The value of a+b is "<<int(a+b)<<endl;
    cout<<"The value of a+b is "<<(int)a+b<<endl;
    cout<<"The value of a+b is "<<(int)(a+b)<<endl;

    return 0;
}   