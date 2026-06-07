#include<iostream>
using namespace std;
int rev = 0;
int reverse(int n){
   
    if(n==0)
        return rev;
     int n1=n%10;
     rev=rev*10+n1;
    
    
      return reverse(n/10);
    
}
int main(){
    int n;
    cout<<"enter any no: ";
    cin>>n;
    cout<<reverse(n);

}