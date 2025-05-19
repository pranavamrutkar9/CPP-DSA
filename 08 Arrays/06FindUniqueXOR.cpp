#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int a=0;
    for (int i = 0; i < size; i++)
    {
        a = a^arr[i];
    }
    return a;
}

int main(){
    int a[]={1,3,3,6,6,7,7};
    int n = (sizeof(a)/sizeof(a[0]));

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<findUnique(a, n);
    
}
