#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int num=fib(n-1)+fib(n-2);
    return num;

}
int main(){
    int n;
    cout<<"enter any no : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<fib(i)<<" ";
    }
}