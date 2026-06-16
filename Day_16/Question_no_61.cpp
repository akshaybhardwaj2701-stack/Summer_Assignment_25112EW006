#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an arr : ";
    cin>>n;
    int arr[n-1];
    cout<<"enter element of an array : ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int actual_sum=(n*(n+1))/2;
    int obtained_sum=0;
     for(int i=0;i<n-1;i++){
        obtained_sum+=arr[i];
     }
     int missing_term=actual_sum-obtained_sum;
     cout<<"missing term is : "<<missing_term;
     return 0;
    }