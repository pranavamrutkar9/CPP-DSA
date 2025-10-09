#include <iostream>
#include <vector>
using namespace std;

void reverse(char name[], int n){
    int s = 0; int e = n-1;
    while(s<e){
        swap(name[s], name[e]);
        s++;
        e--;
    }
    cout<<name;
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cin >> name;
    cout<<"Name: "<<name<<endl;
    cout<<"Length: "<<getLength(name)<<endl;
    reverse(name,getLength(name));
    return 0;
}
