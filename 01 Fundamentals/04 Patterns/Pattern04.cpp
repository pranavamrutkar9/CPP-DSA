#include <iostream>
using namespace std;

// 1 1 1 1 
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<i;
            j++;
            cout<<" ";
        }
        cout<<endl;
        i++;
    }
}
