#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(4);
    a.push_back(6);
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);
    cout<<"size: "<<a.size()<<endl;
    cout<<"capaciy: "<<a.capacity()<<endl;
    cout<<"index 3: "<<a.at(3)<<endl;
    
    cout<<"Front: "<<a.front()<<endl;
    cout<<"back: "<<a.back()<<endl;

    cout<<"before pop: "<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    a.pop_back();
    cout<<"after pop: "<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;

    a.clear();
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<"after clear";
    
    
}
