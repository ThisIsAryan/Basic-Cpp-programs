#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter=0;

public:
    // void initcounter(void)
    // {
    //     counter = 0;
    // }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "Enter Id of your item number " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
        cout << "The price of your item with Id " << itemid[i] << " is " << itemprice[i] << endl;
}
int main()
{
    shop dukaan;
    //dukaan.initcounter();
    cout<<"For dukaan"<<endl;
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();//in teeno ko loop banake bhi daal skte.
    dukaan.displayprice();
    shop cosmos;
    cout<<"For cosmos"<<endl;
    for(int i=0;i<3;i++)
        cosmos.setprice();
    cosmos.displayprice();
    return 0;
}