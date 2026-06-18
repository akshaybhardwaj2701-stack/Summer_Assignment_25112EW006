#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an arr :";
    cin>>n;
    int arr[n];
    cout<<"enter element in arr : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
   
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}