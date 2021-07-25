//Reversing a string-
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Reversing a string-
    string s("I am Iron Man"), rev, s_rev;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        rev = rev + s[i]; //Not good to add character to string and this has more time complexity.
    }
    cout << rev;
    cout << endl;
    for (int i = rev.size() - 1; i >= 0; --i)
    {
        s_rev.push_back(rev[i]); //better choice.
    }
    cout << s_rev << endl;

    //Palindrome check-
    //Noob-
    if (s == rev)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    //alternative method-
    string str = "brbrbrb";
    for (int j = 0; j < str.size() / 2; j++)
    {
        if (str[j] != str[str.size() - 1 - j])
        {
            cout << "Not Palindrome" << endl;
            goto skip;
        }
    }
    cout << "Palindrome" << endl;
    skip:
    return 0;
}