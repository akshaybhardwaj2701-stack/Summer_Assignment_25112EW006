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
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                min_index=j;
            }   
        }
        swap(arr[i],arr[min_index]); 
    }
    cout<<"after selection sort  : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}