#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array: ";
    cin>>n;
    int i;
    int arr[n];
    cout<<"enter no in an array: ";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(i=0;i<n;i++){
           if (min>arr[i]){
           min=arr[i];
           }
    }
    for(i=0;i<n;i++){
        if (max < arr[i]){
        max =arr[i];
        }
    }
    cout<<"min element is : "<<min<<endl;
    cout<<"max element is : "<<max<<endl;
    return 0;
}