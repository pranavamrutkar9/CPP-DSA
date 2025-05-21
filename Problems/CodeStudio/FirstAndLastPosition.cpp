#include <iostream>
#include <vector>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int ans = -1;
    while (s<=e)
    {
        int mid = s + (e - s)/2;
        if (arr[mid]==key)
        {
            ans = mid;
            e = mid-1;
        }
        else if (arr[mid]>key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;   
        }
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int ans = -1;
    while (s<=e)
    {
        int mid = s + (e - s)/2;
        if (arr[mid]==key)
        {
            ans = mid;
            s = mid+1;
        }
        else if (arr[mid]>key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;   
        }
    }
    return ans;
}
int firstAndLastOcc(int arr[], int n, int key){
    cout<<firstOcc(arr, n, key)<<endl;
    cout<<lastOcc(arr, n, key)<<endl;
}

int main(){
    int arr[]={0,5,5,6,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    firstAndLastOcc(arr, size, 6);
}
