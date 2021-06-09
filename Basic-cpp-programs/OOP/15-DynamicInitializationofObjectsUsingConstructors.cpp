//Dynamic Initialization of Objects Using Constructors-
#include<iostream>
using namespace std;
class bank_deposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
        bank_deposit(){}//empty so that we can simply declare objects of class.
        bank_deposit(int p, int y, float r);
        bank_deposit(int p, int y, int r);
        void show();
};
bank_deposit::bank_deposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i=0; i < y; i++)
    {
    returnValue = returnValue * (1+interestRate);
    }
}

bank_deposit::bank_deposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = (float)r/100;
    returnValue = principal;
    for (int i=0; i < y; i++)
    {
    returnValue = returnValue * (1+interestRate);
    }
}
void bank_deposit :: show(){
    cout<<"Principal amount was: "<<principal<<endl
    <<"Return value after "<<years<<" years is "
    <<returnValue<<endl;
}
int main()
{
    bank_deposit bd1, bd2, bd3;//simple declaration
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of principal amount, years, rate"<<endl;
    cin>>p>>y>>r;
    bd1 = bank_deposit(p, y, r);//explicit call.
    bd1.show();
    cout<<"Enter the value of principal amount, years, Rate"<<endl;
    cin>>p>>y>>R;
    bd2 = bank_deposit(p, y, R);//explicit call.
    bd2.show();
    return 0;
}
