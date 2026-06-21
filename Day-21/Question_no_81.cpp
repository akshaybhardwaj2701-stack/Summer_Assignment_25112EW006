#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter string: ";
    cin>>str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<"length is : "<<count <<endl;
}