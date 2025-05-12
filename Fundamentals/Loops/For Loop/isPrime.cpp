#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            cout<<"Not a Prime Number"<<endl;
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        if (n == 1 || n ==0)
        {
            cout<<"1 & 0 are Not Prime Numbers"<<endl;
        }
        else{
            cout<<"Prime Number"<<endl;
        }
    }
}
