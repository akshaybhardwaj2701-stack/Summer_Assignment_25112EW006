#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string name;
    cout<<"enter name: ";
    getline(cin,name);
    int roll_no;
     cout<<"enter roll no : ";
    cin>>roll_no;
    cout<<"enter marks of 5 subject"<<endl;
     float subject1;
    cout<<"enter marks of subject 1 : "<<endl;
    cin>>subject1;
     float subject2;
    cout<<"enter marks of subject 2 : "<<endl;
    cin>>subject2;
     float subject3;
    cout<<"enter marks of subject 3 : "<<endl;
    cin>>subject3;
     float subject4;
    cout<<"enter marks of subject 4 : "<<endl;
    cin>>subject4;
    float subject5;
    cout<<"enter marks of subject 5 : "<<endl;
    cin>>subject5;
    float sum=subject1+subject2+subject3+subject4+subject5;
    float percnt=sum/5;
    string result;
    if(percnt>=33){
         result ="pass";
    }
    else{
     result="fail";
    }
    cout<<"       MARKSHEET       "<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"Subject 1: "<<subject1<<endl;
    cout<<"Subject 2: "<<subject2<<endl;
    cout<<"Subject 3: "<<subject3<<endl;
    cout<<"Subject 4: "<<subject4<<endl;
    cout<<"Subject 5: "<<subject5<<endl;
    cout<<"Total marks: "<<sum<<endl;
    cout<<"Percentage: "<<percnt<<endl;
    cout<<"Result: "<<result<<endl;
return 0;


}