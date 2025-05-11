#include <iostream>
using namespace std;

//       1 
//     2 3
//   4 5 6
// 7 8 9 10
int main(){
    int n;
    cin >> n;
    int count = 1;
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
            cout<<count<<" ";
            j++;
            count++;
        }
        i++;
        cout<<endl;
    }
}
