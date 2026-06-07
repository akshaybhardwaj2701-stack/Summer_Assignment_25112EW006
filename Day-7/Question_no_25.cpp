#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
   

}
int main(){
    int n;
    cout<<"enter any no : ";
    cin>>n;
    if(n<0){
        cout<<"not defined"<<endl;
    }
    else{
        cout<<factorial(n);
    }
    return 0;

}
