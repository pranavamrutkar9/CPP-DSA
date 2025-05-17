#include <iostream>
using namespace std;

int getMax(int arr[], int size){
    int max=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size){
    int min=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter at index"<<i<<": ";
        cin>>arr[i];
    }

    cout<<getMax(arr, size)<<endl;
    cout<<getMin(arr, size)<<endl;    
}
