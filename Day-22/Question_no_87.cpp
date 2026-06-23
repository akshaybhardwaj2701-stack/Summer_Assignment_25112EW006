#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;
    cout<<"enter string :";
    cin>>str;
    char ch;
    cout<<"enter character whose frequency is to be determined : ";
    cin>>ch;
    int n=str.length();
    int count =0;
    for(int i=0;i<n;i++){
        if(str[i]==ch){
            count++;
        }
    }
    cout<<"Frequency of character is : "<<count ;
    return 0;


}