//parameterized comstructor dist. between 2 points-
#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x,y;
    friend float distance(point a, point b);
    public:
     point(int a, int b){
         x =a;
         y =b;
     }
void display(){
    cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
}
};
float distance(point a, point b)
{
    return sqrt((pow((a.x - b.x),2)) + (pow((a.y - b.y),2)));
}
int main()
{
    point p(1,1);
    point q(5,5);
    p.display();
    q.display();  
    float d;
    d = distance(p, q);
    cout<<"The distance between them is: "<<d<<endl;
    return 0;
}