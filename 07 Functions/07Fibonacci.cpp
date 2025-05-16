#include <iostream>
using namespace std;

void printFibonacci(int n){
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<" ";
        int temp = a + b;
        a = b;
        b = temp;
    }
}
int main(){
    int a;
    cin>>a;
    printFibonacci(a);
}
