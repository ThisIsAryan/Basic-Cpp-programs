#include<iostream>
#include<math.h>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class SimpleClaculator{
    protected:
    float a, b;
    public:
    void set_value_simple(){
        cout<<"Enter a and b values for simple calculation: "<<endl;
        cin>>a>>b;
    }
    void get_value_simple(){
        cout<<"a + b = "<<(a+b)<<endl;
        cout<<"a - b = "<<(a-b)<<endl;
        cout<<"a * b = "<<(a*b)<<endl;
        cout<<"a / b = "<<(a/b)<<endl;
    }
};

class ScientificClaculator{
    protected:
    float c;
    public:
    void set_value_Scientific(){
        cout<<"Enter value of c for Scientific calculation"<<endl;
        cin>>c;
    }
    void get_value_Scientific(){
        cout<<"sin(a) = "<<sin(c)<<endl;
        cout<<"log(a) = "<<log(c)<<endl;
        cout<<"a square = "<<pow(c,2)<<endl;
        cout<<"a cube = "<<pow(c, 3)<<endl;
    }
};

class HybridCalculator : public SimpleClaculator, public ScientificClaculator{
    
};

int main()
{
    HybridCalculator calc;
    calc.set_value_simple();
    calc.get_value_simple();
    calc.set_value_Scientific();
    calc.get_value_Scientific();
    return 0;
}