#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size-1; i++){
        if (arr[i]==key){
            cout<<key<<" found at index "<<i<<endl;
            return;
        }
    }
    cout<<"Not Found"<<endl;
    return;
}

int main(){
    int arr[]={-15, 5, 10, 22, 30, 36, 39, 41, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    linearSearch(arr, size, 10);
}
