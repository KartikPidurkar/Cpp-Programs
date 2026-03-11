#include<iostream>
using namespace std;
int main(){

    int num;
    int guess;
    int tries = 0; // Needs to be intialized or will print garbage value

    srand(time(NULL));
    num = (rand()%100 )+1;

    cout<<"*********Number Guessing Game*********"<<endl;

    do{
        cout<<"Enter a Guess Between (1-100):"<<"\n";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"TOO HIGH"<<"\n";
        }
        else if(guess<num){
            cout<<"TOO LOW"<<"\n";
        }
        else{
            cout<<"CORRECT IT TOOK YOU: "<< tries<<" Tries" <<endl;
        }
    }while(guess != num);

    cout<<"**********************************************"<<endl;
    return 0;
}