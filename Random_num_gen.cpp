#include<iostream>
using namespace std;
int main (){

    srand(time(NULL));   // for num b/w 1 to 6(regular dice)
    int num1 = (rand() % 6 + 1); // it genrates number between 0 to 32767
    cout<< num1 <<"\n";

    int num2 = (rand() % 6 + 1); // it genrates number between 0 to 32767
    cout<< num2 <<"\n";

    int num3 = (rand() % 6 + 1); // it genrates number between 0 to 32767
    cout<< num3 <<"\n";


    return 0;
}
//To Genrate random number use logic of dice polyhedral dice
// poly divide or modulous of 20