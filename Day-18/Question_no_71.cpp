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
    int num;
    cout<<"enter num to be searched: ";
    cin>>num;
    int start =0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==num){
            ans=mid;
            break;
        }
        else if(arr[mid]>num){
            end=mid-1;     
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout<<"element found at "<<ans<<endl;
    return 0;
}