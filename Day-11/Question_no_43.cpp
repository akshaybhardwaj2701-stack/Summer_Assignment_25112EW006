#include<iostream>
using namespace std;
int checkprime(int n){
   //prime=1
   //not prime =0
  
    if(n<=1){
       return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
           return 0;
        }
        
        }
         
         return 1;
    }
  

int main(){
    int n;
    cout<<"enter no to be cheked : ";
    cin>>n;
   cout<<checkprime(n);
}