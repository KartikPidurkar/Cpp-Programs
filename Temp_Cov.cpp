#include<iostream>
using namespace std;
//Temperature conversion program
int main(){

    double celsius;
    double fahrenheit;
    double choice;

    cout<<"Temperature converter program"<<endl;
    cout<<"1.Celsius to Fahrenheit"<<endl;
    cout<<"2.Fahrenheit to Celsius"<<endl;

    cout<<"Enter choice 1 or 2 : "<<endl;
    cin>>choice;

    if(choice == 1){
        cout<<"Enter Temperature in Celsius : ";
        cin>>celsius;
        fahrenheit = ((celsius*1.8)+32);
        cout<<"The Temperature in Fahrenheit is "<<fahrenheit<<endl;
    }
    else if(choice == 2){
        cout<<"Enter Temperature in Fahrenheit : ";
        cin>>fahrenheit;
        celsius = (fahrenheit - 32)*5/9;
        cout<<"The Temperature in Celsius is "<<celsius<<endl;
    }
    else{
        cout<<"Invalid Choice"<<endl;
    }

    return 0;
}