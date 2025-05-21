#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;
    int i =0;
    int p =1;
    while (n != 0)
    {
        int bit = n%10;
        ans = ans + (bit * pow(2,i));
        n=n/10;
        i++;
    }
    cout<<ans;   
}
