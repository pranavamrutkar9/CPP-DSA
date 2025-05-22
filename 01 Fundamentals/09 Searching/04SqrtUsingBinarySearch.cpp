#include <iostream>
#include <vector>
using namespace std;

void sqrtBinary(int a){
    int i = 0;
    int count = 0;
    int arr[a];
    
    while(count<=a){
        arr[i]=count++;
        i++;
    }
    int s = 0, e = a - 1;
    int mid = s + (e-s)/2;
    while (s < e)
    {
        if ((arr[mid]*arr[mid])==a)
        {
            cout<<"Sqrt: "<<arr[mid]<<endl;
            return;
        }
        else if ((arr[mid]*arr[mid])>a)
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    cout<<"Sqrt: "<<arr[mid]<<endl;
}

int main(){
    sqrtBinary(60);
}
