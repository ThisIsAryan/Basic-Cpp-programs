#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> marks_map;
    marks_map["Harry"] = 98;
    marks_map["Jack"] = 95;
    marks_map["Aryan"] = 50;   

    marks_map.insert({{"Kia", 56}, {"Kurro", 67}});

    map<string, int> :: iterator itr;
    for(itr = marks_map.begin(); itr != marks_map.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

    cout<<"The size is: "<<marks_map.size()<<endl;
    cout<<"The maximum size is: "<<marks_map.max_size()<<endl;
    cout<<"The emplty's return value is: "<<marks_map.empty()<<endl;

    return 0;
}