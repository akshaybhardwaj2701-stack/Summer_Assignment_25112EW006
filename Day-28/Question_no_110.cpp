#include<iostream>
#include<cstring>
using namespace std;
class account{
    public:
    int account_no;
    string account_holder_name;
    int initial_balance;
};
int main(){
    class account a[100];
    int n=0;
    while(true){
        cout<<"press 1 to add account"<<endl;
        cout<<"press 2 to deposit"<<endl;
        cout<<"press 3 to withdraw"<<endl;
        cout<<"press 4 to check_balance"<<endl;
        cout<<"press 5 for exit"<<endl;
        int choice;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter name of account holder: "<<endl;
            cin.ignore();
            getline(cin,a[n].account_holder_name);
            cout<<"enter account number: "<<endl;
            cin>>a[n].account_no;
            cout<<"enter initial balance : "<<endl;
            cin>>a[n].initial_balance;
            cout<<"account created successfuly"<<endl;
            n++;
            break;
            case 2:
            {
             int search;
                cout<<"enter the account no in which you want to deposit : "<<endl;
                cin>>search;
                for(int i=0;i<n;i++){
                    if(search==a[i].account_no){
                            int amount;
                            cout<<"enter the amount you want to deposit : ";
                            cin>>amount;
                            a[i].initial_balance+=amount;
                    }
            }
            break;
        }
            case 3:
            {
            int search;
                cout<<"enter the account no to check the balance: "<<endl;
                cin>>search;
                for(int i=0;i<n;i++){
                    int withdraw_amount;
                         cout<<"enter the amount you want to withdraw : ";
                          cin>>withdraw_amount;
                    if(search==a[i].account_no){
                            if(a[i].initial_balance<withdraw_amount){
                                    cout<<"insuffficient balance"<<endl;
                            }
                     else{
                         a[i].initial_balance-=withdraw_amount;
                        }
                    }
                }
                break;
            }
            case 4:
            {
                int search;
                cout<<"enter the account no to check the balance: "<<endl;
                cin>>search;
                for(int i=0;i<n;i++){
                    if(search==a[i].account_no){
                         cout<<a[i].initial_balance<<endl;;
                }
            }
            break;
            }
            case 5:
            cout<<"thank you"<<endl;
            return 0;
            break;
            default:
            cout<<"invalid choice"<<endl;
        }
    }
}