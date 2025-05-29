#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;    
    cout<<binary_search(v.begin(), v.end(),6)<<endl;

    cout<<max(9,8)<<endl;
    cout<<min(9,8)<<endl;

    int a=3,b=7;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    swap(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;

    string k = "play";
    reverse(k.begin(), k.end());
    cout<<k<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
