#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;
    
    s.push(9);
    s.push(8);
    s.push(4);
    s.pop();
    cout<<s.top()<<endl;;

    cout<<"size "<<s.size()<<endl;
    cout<<"empty? "<<s.empty()<<endl;
}
