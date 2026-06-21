#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char str[100];
    cout<<"enter string : ";
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
         str[i]=toupper(str[i]);
    }
    cout<<str;
    return 0;
}