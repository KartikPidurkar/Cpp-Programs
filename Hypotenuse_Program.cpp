#include<iostream>
#include<cmath>
using namespace std;
// Hypotenuse program for right angle triangle
int main(){
    double a;
    double b;
    double Hypo;

    cout<<"Enter the length of A(First side)"<<endl;
    cin>>a;
    cout<<"Enter the length of B(second side)"<<endl;
    cin>>b;

    a = pow(a,2);
    b = pow(b,2);
    Hypo = sqrt(a+b);

    cout<<"The Length of third side is "<<Hypo<<endl;

    return 0;
}