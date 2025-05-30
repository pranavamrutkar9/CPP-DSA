#include<iostream>
using namespace std;

void reverseFromM(int arr[], int size, int m){
    int start = m, end = size-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4};
    reverseFromM(arr, 4, 1);
}
