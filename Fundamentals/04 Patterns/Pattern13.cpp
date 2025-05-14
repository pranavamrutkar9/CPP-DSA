#include <iostream>
using namespace std;

// A A A 
// B B B
// C C C
int main(){
    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while (j<=n)
        {
            cout<<ch<<" ";
            j++;
        }
        i++;
        ch++;
        cout<<endl;
    }
}
