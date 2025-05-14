#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: "<<endl;
    cin >> n;
    
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        if (i%2 == 0)
        {
            sum += i;
        }
        i+=1;
    }
    cout<<"Sum till "<<n<<": "<<sum;
}
