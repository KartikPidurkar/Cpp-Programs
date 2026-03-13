#include<iostream>
#include<iomanip> // Provides with the set precision function to set deicmal places
using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){
    double balance = 0;
    int choice = 0; 

    do{
        cout<<"Banking Program"<<endl;
        cout<<"Enter your choice:\n";
    
        cout<<"1.Show Balance\n";
        cout<<"2.Deposit Money\n";
        cout<<"3.Withdraw Money\n";
        cout<<"4.Exit\n";
        cin>>choice;

        switch (choice){
            case 1:showBalance(balance);
                break;
            case 2: balance = balance + deposit();
                    showBalance(balance);
                break ;
            case 3: balance = balance - withdraw(balance);
                    showBalance(balance);
                break;
            case 4: cout<<"Thanks for Visiting our Bank \n";
                break;
            default :
                cout<<"Invalid choice\n";
            break;

        }

    }while(choice !=4);


    return 0 ;
}
void showBalance(double balance){
    cout<<"Your Balance is: $"<<setprecision(2)<<fixed<<balance<<"\n";
}
double deposit(){
    double amount ;
        cout<<"Enter amount to be deposited: ";
        cin>>amount;
        //return amount ; // IMP
        if(amount > 0 ){
            return amount;
        }
        else{
            cout<<"Thats not a valid amount: \n";
            return 0;
        }
}
double withdraw(double balance){
    double cash ;
        cout<<"Enter the amount to withdraw: ";
        cin>>cash;
        //return cash; // IMP
        if(cash > balance){
            cout<<"Insufficient Balance\n";
            return 0;
        }
        else if(cash < 0){
            cout<<"That's not valid amount"<<endl;
            return 0;            
        }
        else{
            return cash;
        }

}

