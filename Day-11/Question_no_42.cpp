#include<iostream>
using namespace std;
max(int n1,int n2){
  
    if (n1>n2){
        return n1;
    }
    else if (n1<n2){
        return n2;
    }
      if(n1==n2){
        cout<<"both no are equal";
        
    }
    
}
int main(){
    int n1;
    cout<<"enter no 1 : ";
    cin>>n1;
    int n2;
    cout<<"enter no 2 : ";
    cin>>n2;
    
    cout<<max(n1,n2);
}