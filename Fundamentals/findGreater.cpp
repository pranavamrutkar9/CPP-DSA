#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;

    if (a>b)
    {
        cout<<"a is greater"<<endl;
    }
    else if (b>a)
    {
        cout<<"b is greater"<<endl;
    }
    else
    {
        cout<<"both are equal"<<endl;
    }
    
}