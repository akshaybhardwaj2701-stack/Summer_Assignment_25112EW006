#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"enter size of an array:";
    cin>>n;
    int arr[n];
    int nums[2];
    cout<<"enter element of an array : ";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cout<<"enter sum : ";
    cin>>s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s){
                nums[0]=arr[i];
                nums[1]=arr[j];
            }
        }
    }
    for(int k=0;k<2;k++){
        cout<<nums[k]<<" ";
    }
    return 0;
}
