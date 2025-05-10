// Find case of a charchter ch
// if a<ch<z --> lowercase
// if A<ch<Z --> uppercase
// if 0<ch<9 --> numeric
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter Charachter: "<<endl;
    cin>>ch;

    if (ch>'a' && ch<'z')
    {
        cout<<"Lowercase"<<endl;
    }
    else if (ch>'A' && ch<'Z')
    {
        cout<<"Uppercase"<<endl;
    }
    else
    {
        cout<<"Numeric Value"<<endl;
    }
}