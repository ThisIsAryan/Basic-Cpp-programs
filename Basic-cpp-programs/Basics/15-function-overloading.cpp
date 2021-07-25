//Functions can have similar name and return type with different arguments.
#include<iostream>
using namespace std;
float volume(float a)//cube
{
    return (a*a*a);
}
float volume(float h, float r)//cylinder
{
    return (3.14*r*r*h);
}
float volume(float a, float b, float c)//cuboid
{
    return (a*b*c);
}
int main()
{
    cout<<"The volume of cube is "<<volume(3)<<endl;
    cout<<"The volume of cylinder is "<<volume(3,5)<<endl;
    cout<<"The volume of cuboid is "<<volume(3,5,7)<<endl;
    return 0;
}