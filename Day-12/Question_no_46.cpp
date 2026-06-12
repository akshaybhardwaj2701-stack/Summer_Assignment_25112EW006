#include<iostream>
#include<math.h>
using namespace std;
int isarmstrong(int n){
    int sum=0;
    int count=0;
    int n1=n;
    while(n!=0){
        int r =n%10;
        count++;
        n=n/10;
    }
    int n2=n1;
    while(n1!=0){
        int rev=n1%10;
        sum=sum+pow(rev,count);
        n1=n1/10;
    }
    if(sum==n2){
        cout<<"Given no is Armstrong no"<<endl;
    }
    else{
        cout<<"Given no is not Armstrong no"<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter any no : ";
    cin>>n;
    isarmstrong(n);
    return 0;
}