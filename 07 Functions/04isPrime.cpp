#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
    int i = 2;
    if (n==1||n==0){
        return true;
    }
    while (i<n)
    {
        if (n%i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
    
}
int main(){
    int a;
    cin>>a;
    cout<<isPrime(a);
}
