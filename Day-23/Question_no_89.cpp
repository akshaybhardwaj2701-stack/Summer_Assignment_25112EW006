#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string  str;
    cout<<"enter string: ";
    getline(cin,str);
    int n=str.length();
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
           if( str[i]==str[j]){
               count++; 
           }
        }
        if(count==1){
            cout<<"first non repeating char is : "<<str[i];
            return 0;
        }      
        }
            cout<<"no non repeating char found";
         return 0;
    }
   

