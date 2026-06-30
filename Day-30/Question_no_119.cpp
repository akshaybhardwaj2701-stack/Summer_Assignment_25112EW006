#include<iostream>
#include<cstring>
using namespace std;
class employee{
    public:
    int id;
    string namee;
    string role;
};
int main(){
    class employee e[100];
    int n=0;
    while(true){
        cout<<"press 1 to add employee"<<endl;
        cout<<"press 2 to display employee"<<endl;
        cout<<"press 3 to search employee"<<endl;
        cout<<"press 4 for exit"<<endl;
        int choice;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter name of employee: "<<endl;
            cin.ignore();
            getline(cin,e[n].namee);
            cout<<"enter id of employee: "<<endl;
            cin>>e[n].id;
            cout<<"enter role of  employee : "<<endl;
            cin.ignore();
            getline(cin,e[n].role);
            n++;
            break;
            case 2:
            if(n==0){
                cout<<"no record founded"<<endl;
                break;

            }
            for(int i=0;i<n;i++){
                cout<<"Name : "<<e[i].namee<<endl;
                cout<<"id : "<<e[i].id<<endl;
                cout<<"role : "<<e[i].role<<endl;
            }
            break;
            case 3:
            int search;
            cout<<"enter id of employee to be searched : "<<endl;
            cin>>search;
            for(int i=0;i<n;i++){
                if(search==e[i].id){
                        cout<<"Name : "<<e[i].namee<<endl;
                        cout<<"id : "<<e[i].id<<endl;
                        cout<<"role : "<<e[i].role<<endl;
                }
            }
            break;
            case 4:
            cout<<"thank you"<<endl;
            return 0;
            break;
        }
    }
}