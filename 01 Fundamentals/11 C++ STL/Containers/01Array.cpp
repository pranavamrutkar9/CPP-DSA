#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 4> a = {1,2,3,4};
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"at index 1: "<<a.at(1)<<endl;
    cout<<"is empty: "<<a.empty()<<endl;
    cout<<"first element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;
    
}
