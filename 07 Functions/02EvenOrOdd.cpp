#include <iostream>
#include <math.h>
using namespace std;

void evenOrOdd(int n){
    if (n%2==0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
}

int main(){
    int a = 8;
    evenOrOdd(a);
}
