#include <iostream>
using namespace std;

int reverseArray(int arr[], int size){
    
    for (int i = 0; i < size/2; i++)
    {
        int temp = arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n = (sizeof(a)/sizeof(a[0]));

    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    reverseArray(a, 6);

    
}
