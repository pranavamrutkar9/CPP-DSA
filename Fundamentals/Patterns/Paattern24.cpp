#include <iostream>
using namespace std;

// 1 2 3 4 
//   1 2 3
//     1 2
//       1
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space =i-1;
        while (space)
        {
            cout<<" "<<" ";
            space--;
        }
        int j = 1;
        while (j<=n-i+1)
        {
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}
