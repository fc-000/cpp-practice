#include <iostream>

using namespace std;

int main(){

    int num1, num2;
    double result;
    char op;
    
    cout<<"Basic Calculator\n";
    cout<<"----------------\n";

    cout<<"Enter number 1: \n";
    cin>>num1;

    cout<<"Enter number 2: \n";
    cin>>num2;

    cout<<"Enter operator: \n";
    cin>>op;

    switch(op){
        case '+':
            result = num1 + num2;
            cout<<"result: " <<result<<'\n';
            break;
        case '-':
            result = num1 - num2;
            cout<<"result: " <<result<<'\n';
            break;
        case '*':
            result = num1 * num2;
            cout<<"result: " <<result<<'\n';
            break;
        case '/':
            result = num1 / num2;
            cout<<"result: " <<result<<'\n';
            break;
        default:
           cout<<"invalid operator\n";
           break;
    }

    cout<<"----------------";
    
    return 0;
}