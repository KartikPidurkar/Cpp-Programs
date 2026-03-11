#include<iostream>
#include<ctime>
using namespace std;
int main (){

    srand(time(0));
    int randNum = rand()%5+1;
    switch (randNum){
        case 1:
            cout<<"You win a laptop";
            break;
        case 2:
            cout<<"You win an samsung s26 ";
            break;
        case 3:
            cout<<"Happy Birthday";
            break;
        case 4:
            cout<<"You Have 1 million dollars";
            break;
        case 5:
            cout<<"Honoured one";
            break;
        default:
        cout<<"Sole Exception of Gojo Satoru";
        break;
        
    }









    return 0;
}