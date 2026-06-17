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
    int n3=n1+n2;
    int crr[n3];
    for(int i=0;i<n1;i++){
        crr[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        crr[i+n1]=brr[i];
    }
    cout<<"Ater merging : ";
    for(int i=0;i<n3;i++){
        cout<<crr[i]<<" ";
    }
}

    