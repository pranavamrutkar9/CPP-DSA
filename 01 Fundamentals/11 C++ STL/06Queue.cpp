#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;
    q.push(5);
    q.push(3);
    q.push(8);
    cout<<"Front: "<<q.front()<<endl;
    cout<<"back: "<<q.back()<<endl;
    q.pop();
    cout<<"Front: "<<q.front()<<endl;
    cout<<"back: "<<q.back()<<endl;
    cout<<"Empty "<<q.empty()<<endl;
    cout<<"size "<<q.size ()<<endl;
}
