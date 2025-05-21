#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int operand1, operand2;
    char op;
    cout<<"Enter Operand 1: "<<endl;
    cin>>operand1;
    cout<<"Enter Operand 2: "<<endl;
    cin>>operand2;
    cout<<"Enter Operator(+,-,*,/): "<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<operand1+operand2<<endl;
        break;
    case '-':
        cout<<operand1-operand2<<endl;
        break;
    case '*':
        cout<<operand1*operand2<<endl;
        break;
    case '/':
        cout<<operand1/operand2<<endl;
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
    
    
}
