#include<iostream>
#include<cstring>
using namespace std;
class lib{
    public:
    int book_id;
    string book_name;
    string author_name;
};
int main(){
    class lib l[100];
    int n=0;
    while(true){
        cout<<"press 1 to add book"<<endl;
        cout<<"press 2 to display book"<<endl;
        cout<<"press 3 to search bbok"<<endl;
        cout<<"press 4 for exit"<<endl;
        int choice;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter name of book: "<<endl;
            cin.ignore();
            getline(cin,l[n].book_name);
            cout<<"enter id of book: "<<endl;
            cin>>l[n].book_id;
            cout<<"enter name of author : "<<endl;
            cin.ignore();
            getline(cin,l[n].author_name);
            n++;
            break;
            case 2:
            if(n==0){
                cout<<"no record founded"<<endl;
            }
            for(int i=0;i<n;i++){
                cout<<"Name : "<<l[i].book_name<<endl;
                cout<<"id : "<<l[i].book_id<<endl;
                cout<<"Name of author : "<<l[i].author_name<<endl;
            }
            break;
            case 3:
            int search;
            cout<<"enter id of book to be searched : "<<endl;
            cin>>search;
            for(int i=0;i<n;i++){
                if(search==l[i].book_id){
                       cout<<"Name : "<<l[i].book_name<<endl;
                       cout<<"id : "<<l[i].book_id<<endl;
                       cout<<"Name of author : "<<l[i].author_name<<endl;
                }
            }
            break;
            case 4:
            cout<<"thank you"<<endl;
            return 0;
            break;
            default:
            cout<<"invalid choice"<<endl;
        }
    }
}