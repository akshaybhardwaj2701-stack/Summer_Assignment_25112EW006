#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter size of an arr 1 : ";
    cin>>n1;
    int arr[n1];
    cout<<"enter no in array 1 : ";
    for(int i=0;i<n1;i++){
       cin>>arr[i];
    }
    int n2;
    cout<<"enter size in arr 2 : ";
    cin>>n2;
    int brr[n2];
    cout<<"enter no in array 2 : ";
    for(int i=0;i<n2;i++){
       cin>>brr[i];
    }
    for(int i=0;i<n1;i++){
        int is_found=0;
        for(int j=0;j<n2;j++){
            if(arr[i]==brr[j]){
                is_found  = 1;
                break;
            }
        }
        int dublicate=0;
        for(int k=0;k<i;k++){
            if(arr[k]==arr[i]){
                dublicate=1;
                break;
            }
        }
        if(is_found&&!dublicate){
            cout<<arr[i]<<" ";
        }

    }
}