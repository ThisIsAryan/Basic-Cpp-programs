#include<iostream>
#include<cmath>
using namespace std;
class ScientificClaculator{
    protected:
    float c;
    public:
    void set_value(int a){
        c = a;
    }
    float sq(){
        return pow(c,2) ;
    }
    float sqroot(){
        return sqrt(c) ;
    }
    float cube(){
        return pow(c,3) ;
    }
    float logValue(){
        return log(c) ;
    }
    void display(){
       cout<<logValue();
    }
};
int main()
{
    ScientificClaculator a;
    a.set_value(6);
    a.display();
    return 0;
}