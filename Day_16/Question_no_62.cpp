#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an arr : ";
    cin>>n;
     int arr[n];
    int i;
    cout<<"enter no in array : ";
    for(i=0;i<n;i++){
       cin>>arr[i];
    }
    int count =0 ;
    int max_frequency=0;
    int element =arr[0];
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(max_frequency<count){
            max_frequency=count;
            element =arr[i];
        }
    }
    cout<<"Element with max frequency is : "<<element;
    return 0;
}