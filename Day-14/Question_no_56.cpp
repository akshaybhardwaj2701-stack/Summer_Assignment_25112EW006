#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>vis;
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                int flag=0;
                for(int k=0;k<vis.size();k++){
                    if(arr[i]==vis[k]){
                    flag=1;
                    break;
                    }
                }
                if(flag==0){
                    cout<<arr[i]<<" ";
                    vis.push_back(arr[i]);
                }
            }
        }
    }
    return 0;
}