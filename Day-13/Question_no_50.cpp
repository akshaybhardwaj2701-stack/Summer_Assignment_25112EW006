#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    int i;
    cout<<"enter no in arr : ";
    int arr[n];
    for(i=0;i<n;i++){    
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<n;i++){
       sum=sum+arr[i];
    }
    int avrg=sum/n;
    cout<<"sum is : "<<sum<<endl;
    cout<<"avrg is " <<avrg<<endl;
}