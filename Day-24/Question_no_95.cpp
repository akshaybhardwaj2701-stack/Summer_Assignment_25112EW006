#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str1;
    cout<<"enter string : ";
    getline(cin,str1);
    string str2;
    int n=str1.length();
    string ans;
    int maxlength=0;
    for(int i=0;i<n;i++){
        if(str1[i]!=' '){
             ans.push_back(str1[i]);
        }
       else{
        if( maxlength<ans.length()){
            maxlength=ans.length();
            str2=ans;
        }
       ans="";   
       } 
    }
    if( maxlength<ans.length()){
            maxlength=ans.length();
            str2=ans;
        }
       cout<<str2;
    return 0;
}