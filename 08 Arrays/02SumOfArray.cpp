#include <iostream>
using namespace std;

int arraySum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    cout<<sum;
}
int main(){
    int n;
    cout<<"Enter no elements: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Index "<<i<<": ";
        cin>>a[i];
    }
    arraySum(a, n);
    
}
