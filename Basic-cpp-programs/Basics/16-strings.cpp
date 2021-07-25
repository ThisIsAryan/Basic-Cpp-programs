#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1("I am Aryan");
    //cin>>s; //breaks at space.
    string s2 = "Hajela";

    //Accessing specific character-
    s1[2] = 'A'; //Note- assign character in ' '

    //Size of string -
    cout << s1.size() << endl;

    //Concatenating strings-
    string sum = s1 + " " + s2;
    cout << sum << endl;

    //comparing strings-
    if (s1 == s2)
    {
        cout << "Same String" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }

    //Iterating in string-
    for (int i = 0; i < s2.size(); i++)
    {
        cout << s2[i] << endl;
    }

    //Taking multiple inputs-
    string name, surname;
    cin >> name >> surname; //space aur enter, dono pe break hoga.
    cout << name << " " << surname << endl;

    //Using getline function-
    fflush(stdin); //or use cin.ignore(); //Note- note as getline starts taking input from current cursor position.
    string fullName;
    getline(cin, fullName);
    cout << fullName;

    //taking multiple strings as input-
    int n;
    string stemp;
    cout << endl
         << "Enter number of inputs: ";
    cin >> n;
    cin.ignore(); //bringing cursor to next line.
    while (n--)
    {
        getline(cin, stemp);
        cout << stemp << endl;
    }
    return 0;
}