#include<iostream>
#include<cstring>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    float marks;
};
int main(){
    class student s[100];
     int n=0;
    while(true){   
    cout<<"press 1 to add student "<<endl;
    cout<<"press 2 to display all student  "<<endl;
    cout<<"press 3 to search student"<<endl;
    cout<<"press 4 to exit"<<endl;
     int choice;
    cout<<"enter your choice :  "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"enter name : "<<endl;
        cin.ignore();
        getline(cin,s[n].name);
        cout<<"enter roll_no: "<<endl;
        cin>>s[n].roll_no;
        cout<<"enter marks: "<<endl;
        cin>>s[n].marks;
        n++;
       break;
    case 2:
            if(n==0){
                cout<<"no record"<<endl;
            }
            else{
                for(int i=0;i<n;i++){
                     cout<<"name: "<<s[i].name<<endl;
                    cout<<"roll no : "<<s[i].roll_no<<endl;
                     cout<<"marks : "<<s[i].marks<<endl;
                }
            }
    break;
    case 3:
    {
    int found=0;
    int roll;
    cout<<"enter roll_no of student to be searched: "<<endl;
     cin>>roll;
    for(int i=0;i<n;i++){
        if(roll==s[i].roll_no){
            cout<<"name: "<<s[i].name<<endl;
            cout<<"roll no: "<<s[i].roll_no<<endl;
             cout<<"marks: "<<s[i].marks<<endl;
             found=1;
        }
    }
      if(found==0){
            cout<<"not founded"<<endl;
      }
    break;
    }
    case 4:
    cout<<"thank you";
    return 0;
    break;
    default:
    cout<<"invalid choice"<<endl;
    } 

    }
}