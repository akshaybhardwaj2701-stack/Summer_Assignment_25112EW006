#include<iostream>
using namespace std;
sum(int n1,int n2){
    int ans= n1+n2;
    return ans;
}
int main(){
    int n1;
    cout<<"enter no 1 : ";
    cin>>n1;
    int n2;
    cout<<"enter no 2 :";
    cin>>n2;
    cout<<sum(n1,n2);
}