#include<iostream>
using namespace std;
int ispalindrome(int n){
    int rev=0;
    int n1=n;
    while(n!=0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==n1){
        cout<<"Given no is palindrome"<<endl;
    }
    else{
        cout<<"Given no is not palindrome"<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter any no : ";
    cin>>n;
    ispalindrome(n);
}