#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1]='A';
    m[2]='B';
    m[3]='C';
    m.insert( {4,"D"});

    m.erase(2);
    for(auto i : m){
        cout << i.first << ": " << i.second << " ";
    }
}
