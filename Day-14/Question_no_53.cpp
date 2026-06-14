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
    cout<<"enter no to be searched : ";
    cin>>num;
    for(i=0;i<n;i++){
      if(num==arr[i]){
         cout<<"element found";
      }    
    }
      cout<<"not found";
     return 0;
}