// //Loops-
// #include<iostream>
// using namespace std;
// int main()
// {
//     // //for loop-
//     // for(int i=0;i<5;i++)
//     // cout<<"Hi!"<<endl;
//     // //do while-
//     // int i=0;
//     // do{
//     //     cout<<"Hi!"<<endl;
//     //     i++;
//     // }
//     // while(i<5);
//     //while-
//     int i=1;
//     while(i<=5)
//     {
//         cout<<"Hi!"<<endl;
//         i++;
//     }
//     return 0;
// }

// //break and contibue:
#include<iostream>
using namespace std;
int main()
{
    int n;
    for(int i =0; ;i++)
    {
        cout<<"Enter the number: \n";
        cin>>n;
        if(n==18)
        {cout<<"You are 18"<<endl;
        continue;}
        else
        {cout<<"You are not 18";
        break;}
    }
    return 0;
}