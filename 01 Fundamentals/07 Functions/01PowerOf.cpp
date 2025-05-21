#include <iostream>
#include <math.h>
using namespace std;

int powerof(int a, int b){
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main(){
    int a = 3;
    cout << powerof(12,2);
}
