#include <iostream>
#include <string>
#include <tuple>
using namespace std;
//tuples- special objects. get(), make_tuple(), tie(), swap(), tuple_cat(), tuple_size().
int main()
{
    int a = 5, b = 10, x;
    tuple<int, float, string> geek(a, 4.5, "Aryan");
    tuple<int, float, string> leet;
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
    auto cat = tuple_cat(geek, leet);
}