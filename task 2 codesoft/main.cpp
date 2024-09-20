// codesoft task 2  C++ [ Calculator multifunctional application.demo]
// [ Sun 1, sept] [11.38 AM]


#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char op;
    
    cout<<"enter the value of 1st operand"<<" ";
    cin>>a;
    
    cout<<"enter the value of 2nd operand"<<" ";
    cin>>b;

    cout<<"enter the operation you want to perform"<<" ";
    cin>>op;
    
    switch (op) {
        case '+':
            cout<<"addition of 2 operands: "<<(a+b)<<endl;
            break;
            
        case '-':
            cout<<"substraction of 2 operands: "<<(a-b)<<endl;
            break;
            
        case '*':
            cout<<"multiplication of 2 operands: "<<(a*b)<<endl;
            break;
            
        case '/':
            cout<<"division of 2 operands: "<<(a/b)<<endl;
            break;
            
        case '%':
            cout<<"modulus of 2 operands: "<<(a%b)<<endl;
            break;
            
        default:
            break;
    }
    return 0;
}
