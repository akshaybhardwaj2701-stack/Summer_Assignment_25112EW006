#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of arr :";
    cin>>n;
 
    int i;
    int arr[n];
    cout<<"enter no in arr : ";
    for(i=0;i<n;i++){
        
        cin>>arr[i];
    }
    cout<<"no in arr is : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}