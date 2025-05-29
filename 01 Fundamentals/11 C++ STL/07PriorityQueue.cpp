#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(9);
    pq.push(10);
    pq.push(0);
    pq.push(4);
    
    pq.pop();
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    
    cout<<pq.top()<<endl;
    
}
