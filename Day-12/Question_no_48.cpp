#include<iostream>
using namespace std;
int isperfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }  
    }
    if(sum==n){
        cout<<"Given no is perfect no:";
    }
    else{
        cout<<"Given no is not a perfect no";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter any no : ";
    cin>>n;
    isperfect(n);
    return 0 ;
}