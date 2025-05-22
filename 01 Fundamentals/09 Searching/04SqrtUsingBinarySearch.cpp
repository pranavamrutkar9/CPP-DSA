#include <iostream>
using namespace std;

void sqrtBinary(int a){
    int s = 0, e = a - 1;
    int mid = s + (e-s)/2;
    while (s < e)
    {
        if ((mid*mid)==a)
        {
            cout<<"Sqrt: "<<mid<<endl;
            return;
        }
        else if ((mid*mid)>a)
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    cout<<"Sqrt: "<<mid<<endl;
}

int main(){
    sqrtBinary(100);
}
