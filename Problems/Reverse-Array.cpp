#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    
}
