#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (i!=j && arr[i]==arr[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int a[]={1,3,1,3,6,6,7,0,7};
    int n = (sizeof(a)/sizeof(a[0]));

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<findUnique(a, n);
    
}
