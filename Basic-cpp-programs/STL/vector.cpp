#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1(5,13); // 13 13 13 13 13 
    vector<int> vec2{2,3,4,5,6};
    for (int i : vec1){
        cout << i << " "; // 13 13 13 13 13 
    }
    cout<<endl;
    for (int i : vec2){
        cout << i << " "; //2 3 4 5 6
    }
    cout<<endl;
    vector<int> vec3(vec2.begin(), vec2.end());
    fill(vec3.begin(), vec3.end(), 13);
    for (int i : vec3){
        cout << i << " "; // 13 13 13 13 13 
    }
    cout<<endl;
    auto iter = vec2.rbegin();
    cout<<*iter;
    return 0;
}