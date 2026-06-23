#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str1;
    cout<<"enter first string : ";
    getline(cin,str1);
    string str2;
    cout<<"enter string 2 : ";
    getline(cin,str2);
    if(str1.length()!=str2.length()){
        cout<<"not anagrams";
        return 0;
    }
    int flag=0;
    for(int i=0;i<str1.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"Anagrams";
    }
    else{
        return 0;
    }
}