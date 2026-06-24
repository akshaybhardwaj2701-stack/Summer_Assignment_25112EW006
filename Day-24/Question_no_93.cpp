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
        cout<<"false";
        return 0;
    }
    string  temp=str1+str1;
    while(temp.length()!=0&&temp.find(str2)<temp.length()){
        cout<<"true";
        return 0;
    }
    cout<<"false";
    return 0;
}