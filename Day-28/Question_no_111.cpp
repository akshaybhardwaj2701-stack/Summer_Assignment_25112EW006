#include<iostream>
#include<cstring>
using namespace std;
class ticket{
    public:
    int ticket_no;
    string passanger_name;
    string destination;
};
int main(){
    class ticket t[100];
    int n=0;
    while(true){
        cout<<"press 1 to book ticket"<<endl;
        cout<<"press 2 to display ticket"<<endl;
        cout<<"press 3 to  exit "<<endl;
        int choice;
        cout<<"enter your choice : "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter ticket no: "<<endl;
            cin>>t[n].ticket_no;
            cout<<"enter passenger name: "<<endl;
            cin.ignore();
            getline(cin,t[n].passanger_name);
            cout<<"enter destination: "<<endl;
            cin.ignore();
            getline(cin,t[n].destination);
            cout<<"ticket booked succesfully"<<endl;
            n++;
            break;
            case 2:
                int search;
                cout<<"enter ticket no of ticket to be search: "<<endl;
                cin>>search;
                for(int i=0;i<n;i++){
                    if(search==t[i].ticket_no){
                        cout<<"Name: "<<t[i].passanger_name<<endl;
                        cout<<"ticket no: "<<t[i].ticket_no<<endl;
                        cout<<"Destination: "<<t[i].destination<<endl;
                    }
                }
                break;
            case 3:
              cout<<"thankyou";
              return 0;
              break;
            default:
            cout<<"invalid choice";
        }

    }
}