#include <iostream>
#include <vector>
using namespace std;

void binarySearch(int arr[], int size, int key){
    int low = 0;
    int high = size-1;
    while (low<=high)
    {
        int mid = ((low+high)/2);
        if (arr[mid]==key){
            cout<<key<<" found at index "<<mid<<endl;
            return;
        }
        else if (arr[mid]>key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }   
    }
    cout<<"Not found";
    return;
    
}

int main(){
    int arr[]={-15, 5, 10, 22, 30, 36, 39, 41, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    linearSearch(arr, size, 10);
}
