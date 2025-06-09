#include<iostream>
#include<vector>
using namespace std;

void mergeSorted(vector<int> arr1, int n, vector<int> arr2, int m, vector<int> arr3){
    int i = 0, j = 0;
    int k = 0;

    while (i<n && j<m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }   
    
    for (int p = 0; p < arr3.size(); p++)
    {
        cout<<arr3[p]<<" ";
    }
}

int main(){
    vector<int> arr1={1,3,80};
    vector<int> arr2={2,4,6,20};

    int n = arr1.size();
    int m = arr2.size();

    vector<int> arr3;
    arr3.resize(arr1.size() + arr2.size()); 

    mergeSorted(arr1, n, arr2, m, arr3);
}
