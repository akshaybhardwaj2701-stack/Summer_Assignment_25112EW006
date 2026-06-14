#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    int arr[n];
    int i;
    cout<<"enter no in array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"enter element to get frequency : " ;
    cin>>num;
    int count=0;
    for(i=0;i<n;i++){
        if(arr[i]==num){
            count++;
        }
    }
    cout<<"frequency is : "<<count <<endl;
    return 0;
}