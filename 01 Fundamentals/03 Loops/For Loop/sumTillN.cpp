#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout<<"The sum is "<<sum<<endl;
}
