#include <iostream>
using namespace std;

int swapAlternate(int arr[], int n){
    for (int i = 0; i < n; i+=2)
    {
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
}
int main(){
    int a[]={1,2,3,4,5};
    int n = (sizeof(a)/sizeof(a[0]));

    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    swapAlternate(a, n);

    
}
