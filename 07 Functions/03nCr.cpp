#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n){
    int factorial = 1;
    if (n == 0){
        return factorial;
    }
    for (int i = 1; i <= n; i++)
    {
        factorial = i*factorial;
    }
    return factorial;
}
int nCr(int n, int r){
    int ans;
    ans = (factorial(n))/(factorial(r)*factorial(n-r));
    return ans;
}

int main(){
    cout<<nCr(8,2);
}
