#include<iostream>
#include<string>
using namespace std;

string compare(string a, string b){
    if(a.size() == b.size()){
    for(int i = 0; i < a.size(); i++){
        {
            if(a[i] != b[i])
            return "Not Same";
        }
    }
    return "Same String";
    }
    else
    return "Not Same";
}

int main(){
    string name1 = "Aryan";
    string name2 = "Aryan";
    cout<<compare(name1, name2);
    return 0;
}