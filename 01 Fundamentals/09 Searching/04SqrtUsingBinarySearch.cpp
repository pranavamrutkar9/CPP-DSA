#include <iostream>
using namespace std;

void sqrtBinary(int a){
    int s = 0, e = a;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s <= e)
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
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    cout<<"Sqrt: "<<ans<<endl;
}

int main(){
    sqrtBinary(0);
}
