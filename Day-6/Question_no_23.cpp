#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any no : ";
    cin>>n;
    int count =0;
    while(n!=0){
        count =count+(n&1);
        n=n>>1;
    }
    cout<<count;
   
}