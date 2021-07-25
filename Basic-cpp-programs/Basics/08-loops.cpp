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
#include <iostream>
using namespace std;
int main()
{
    int n;
    for (int i = 0;; i++)
    {
        cout << "Enter the number: \n";
        cin >> n;
        if (n == 18)
        {
            cout << "You are 18" << endl;
            continue;
        }
        else
        {
            cout << "You are not 18";
            break;
        }
    }
    cout << endl
         << "Enter number of iterations: ";
    cin >> n;   //say 5
    while (n--) //false at 0.
    {
        cout << n; //43210 //n-- is post decremental operator. // phle check fir subtract.
    }
    cout << "\n"
         << n << endl; //will be -1 after the loop.

    n = 5;
    while (--n) //false at 0.
    {
        cout << n; //4321 // --n is pre decremental operator. //phle subtract fir check.
    }
    cout << "\n"
         << n; //will be 0 after the loop.
         
    return 0;
}