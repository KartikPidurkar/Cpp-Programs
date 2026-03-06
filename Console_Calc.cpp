#include<iostream>
using namespace std;
int main(){
    char op;
    double num1;
    double num2;
    double result;

    cout<<"**********Calculator**********"<<endl;

    cout<<"Enter either (+ - * /): ";
    cin>>op;

    cout<<"Enter number 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;

    switch(op){
        case '+':
        result = num1+num2;
        cout<<"The total is =  "<<result<<endl;
        break;
        case '-':
        result = num1-num2;
        cout<<"The total is =  "<<result<<endl;
        break;
        case '*':
        result = num1*num2;
        cout<<"The total is =  "<<result<<endl;
        break;
        case '/':
        result = num1/num2;
        cout<<"The total is =  "<<result<<endl;
        break;
        default:
        cout<<"Enter valid operator"<<endl;
        break;

    }
    cout<<"******************************"<<endl;
    return 0;
}