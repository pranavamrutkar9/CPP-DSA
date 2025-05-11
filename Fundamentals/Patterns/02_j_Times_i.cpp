#include <iostream>
using namespace std;

// 1 1 1 1 1 
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5
int main(){
    int n;
    cout<<"Enter value of n: "<<endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
