#include<iostream>
using namespace std;
int main(){
    int balance;
    cout<<"enter your balance: ";
    cin>>balance;
    
    while(true){
     int n;
    cout<<"press 1 to check balance\n";
    cout<<"press 2 to withdraw money\n";
    cout<<"press 3 to deposite money\n";
    cout<<"press 4 to exit\n";
    cin>>n;
    if(n==1){
        cout<<"your balance is : "<<balance<<"\n"; 
        
    }
    else if(n==2){
        int amount;
        cout<<"enter amount you want to withdraw\n";
        cin>>amount;
        if(amount>balance){
            cout<<"insufficient balance";
        }
        else{
        balance=balance-amount;
        }
    }
    else if(n==3){
        int amount;
        cout<<"enter amount you want to deposit\n";
        cin>>amount;
        balance=balance+amount;
        
    }
     else if(n==4){
        cout<<"thank you and visit again ";
        break;
    }   
    }
return 0;
}