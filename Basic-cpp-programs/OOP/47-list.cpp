#include <iostream>
#include <list>

using namespace std;

void display(list<int> &L)
{
    list<int>::iterator iter;
    for (iter = L.begin(); iter != L.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; //List of 0 length.
    //list<int> list2(4); //list of size 4.

    cout << "Performed insertion of elements to list1 using push_back" << endl;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(12);

    cout << "Printing values in list 1 using iterators" << endl;
    list<int>::iterator itr;
    itr = list1.begin();

    cout << *itr << "\t" << *++itr << "\t";

    advance(itr, 1);

    cout << *itr << endl;

    cout << "Displaying list1 using iterator display function" << endl;
    display(list1);

    list<int> list2(3);
    //Yahan kyonki size fix h isliye iterator use kar ke values input kar skte.

    cout << "Performed insertion of elements to list2 using iterators" << endl;
    list<int>::iterator itr2;
    itr2 = list2.begin();
    *itr2 = 45;
    itr2++;
    *itr2 = 6;
    itr2++;
    *itr2 = 9;
    itr2++;

    cout << "Displaying list2 using iterator display function" << endl;
    display(list2);

    cout << "Sorting list1" << endl;
    //sort -
    list1.sort();
    display(list1);

    cout << "Merging list2 to list1 and displaying list1" << endl;
    //merge -
    list1.merge(list2);
    display(list1);

    cout << "Reversing list1" << endl;
    //Reversing a linked list-
    list1.reverse();
    display(list1);

    cout << "Performing deletion of elements" << endl;
    //Removing elements from the list:
    display(list1);
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(9);
    display(list1);

    return 0;
}