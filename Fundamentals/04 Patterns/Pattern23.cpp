#include <iostream>
using namespace std;

//       1 
//     2 2
//   3 3 3
// 4 4 4 4
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space =n-i;
        while (space)
        {
            cout<<" "<<" ";
            space--;
        }
        int j = 1;
        while (j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}
