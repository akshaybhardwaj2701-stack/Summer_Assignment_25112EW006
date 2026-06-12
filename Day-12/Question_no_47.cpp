#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    if(n==1){
        return 0;
        
    }
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        int nextnum=a+b;
        cout<<nextnum<<" ";
        a=b;
        b=nextnum;
    }
    

}
int main(){
    int n;
    cout<<"enter any  no :";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}