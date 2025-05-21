#include <iostream>
#include <vector>
using namespace std;

int pivotElement(int arr[], int n){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s = mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return arr[s];
}

int main(){
    int arr[]={7,9,2,3};
    cout<<pivotElement(arr,5);
}
