#include <iostream>
using namespace std;

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
int main(){
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}
