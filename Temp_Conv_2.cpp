#include<iostream>
using namespace std;
//Temperature conversion program
int main(){

    double celsius;
    double fahrenheit;
    char choice;

    cout<<"Temperature converter program"<<endl;
    cout<<"F = Fahrenheit" <<endl;
    cout<<"C = Celsius"    <<endl;
   
    cout<<"What would you like to convert to : "<<endl;
    cin>>choice;

    if(choice == 'F' || choice == 'f'){
        cout<<"Enter Temperature in Celsius : ";
        cin>>celsius;
        fahrenheit = ((celsius*1.8)+32);
        cout<<"The Temperature in Fahrenheit is "<<fahrenheit<<endl;
    }
    else if(choice == 'C' || choice == 'c'){
        cout<<"Enter Temperature in Fahrenheit : ";
        cin>>fahrenheit;
        celsius = (fahrenheit - 32)/1.8;
        cout<<"The Temperature in Celsius is "<<celsius<<endl;
    }
    else{
        cout<<"Invalid Choice"<<endl;
    }

    return 0;
}