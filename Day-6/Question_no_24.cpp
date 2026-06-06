#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any no : ";
    cin>>n;
    int power;
    cout<<"enter which power of no you want : ";
    cin>>power;
    int result=n;
    if(power==0){
        cout<<1;
        return 0;
    }
    if(power==1){
        cout<<n;
        return 0;
    }
    for(int i=2;i<=power;i++){
         result=result*n;
    }
    cout<<result;
    
}