#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int amt = 1330;
    int n100,n50,n20,n10;
    switch (1)
    {
    case 1:
        n100 = amt/100;
        amt = amt%100;
        cout<<n100<<" Hundred Notes"<<endl;
    case 2:
        n50 = amt/50;
        amt = amt%50;
        cout<<n50<<" Fifty Notes"<<endl;
    case 3:
        n20 = amt/20;
        amt = amt%20;
        cout<<n20<<" Twenty Notes"<<endl;
    case 4:
        n10 = amt/10;
        amt = amt%10;
        cout<<n10<<" Ten Notes"<<endl;
    
    default:
        break;
    }
}
