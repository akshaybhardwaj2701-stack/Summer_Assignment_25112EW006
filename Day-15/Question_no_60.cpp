#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an arr : ";
    cin>>n;
    int arr[n];
    cout<<"enter element of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
         swap(arr[i],arr[j]);
         j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
