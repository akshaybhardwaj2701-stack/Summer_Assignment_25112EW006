#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter size of arr 1 : ";
    cin>>n1;
    int arr[n1];
    cout<<"enter no in arr 1 :";
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    int n2;
    cout<<"enter size of arr 2 : ";
    cin>>n2;
    int brr[n2];
    cout<<"enter no in  arr 2 :";
    for(int j=0;j<n2;j++){
        cin>>brr[j];
    }
    for(int i=0;i<n1;i++){
        int found=0;
        for(int j=0;j<n2;j++){
            if (arr[i]==brr[j]){
                found =1;
                break;
            }
        }
        if(found){
            cout<<arr[i]<<" ";
        }
    }
    return 0;

}