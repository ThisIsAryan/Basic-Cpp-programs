#include <iostream>
#include <string>
#include <tuple>
using namespace std;
//tuples- special objects. get(), make_tuple(), tie(), swap(), tuple_cat(), tuple_size().
int main()
{
    int a = 5, i1, i2;
    float f1, f2;
    string s1, s2;
    tuple<int, float, string> geek(a, 4.5, "Aryan"), leet;
    //tuple<int, float, string> leet;
    //get()
    cout << "The elments of the tuple geek are: "
         << get<0>(geek) << " " << get<1>(geek) << " " << get<2>(geek) << endl;
    //make_tuple()
    leet = make_tuple(54, 76.6, "Ayaan");
    cout << "The elments of the tuple leet are: "
         << get<0>(leet) << " " << get<1>(leet) << " " << get<2>(leet) << endl;
    //swap()
    geek.swap(leet);
    cout << "After swapping: " << endl
         << "geek: "
         << get<0>(geek) << " " << get<1>(geek) << " " << get<2>(geek) << endl
         << "leet: "
         << get<0>(leet) << " " << get<1>(leet) << " " << get<2>(leet) << endl;
    //tuple_size<decltype(name)>::value
    cout << "Size of tuple geek is " << tuple_size<decltype(geek)>::value << endl;
    //tuple_cat()
    auto chef = tuple_cat(geek, leet);
    cout << "After concatenation: " << endl
         << get<0>(chef) << " " << get<1>(chef) << " " << get<2>(chef) << " "
         << get<3>(chef) << " " << get<4>(chef) << " " << get<5>(chef) << " " << endl;
    //tie() and ignore-
    tie(i1, ignore, s1, i2, ignore, s2) = chef; //ignored both float.
    cout << "Using tie: " << i1 << " " << s1 << " " << i2 << " " << s2 << endl;

    return 0;
}