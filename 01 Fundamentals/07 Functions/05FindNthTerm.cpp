#include <iostream>
using namespace std;

// nth term = (3*n)+7
int findNthTerm(int n){
    int ans = (3*n)+7;
    return ans;
}
int main(){
    int a;
    cin>>a;
    cout<<findNthTerm(a);
}
