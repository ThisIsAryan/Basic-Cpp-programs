/*
STL = Containers + Algorithms + Iterators
1. Containers - objects which store data.
2. Algorithms - Procedure to process data.
3. Iterator - Object which points to an element of a container.
*/
//Containers in C++ =>

//Types- sequence containers (linear fashion), associative containers(Direct access), derived containers(real world modelling)

//*****************************Vectors*******************************************

#include <iostream>
#include <vector>

using namespace std;

template<class T>
void display(vector<T> &V)
{
    {
        for (int i = 0; i < V.size(); i++)
            cout << V[i] << "  ";
    }
    cout << endl;
}

int main()
{
    //Ways to create a vector-
    vector<int> vec1; //Zero length integer vector.
    vector<char> vec2(4); //4-element character vector.
    vec2.push_back('A');
    display(vec2);
    vector<char> vec3(vec2); //4-element character vector from vec2.
    display(vec3);
    vector<int> vec4(4, 13); //6-element vector of 3s.

    display(vec4);
    cout<<"The size of the vec4 is "<<vec4.size();

    int ele, size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> ele;
        vec1.push_back(ele);
    }
    //vec1.pop_back();    
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 566); //Now, iter is behind 566.....
    display(vec1);
    vec1.insert(iter+2, 4, 578); //4 copy...
    display(vec1);
    cout<<vec1.at(4);
    return 0;
}