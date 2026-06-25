#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n1;
    cout<<"enter length of arr 1 : ";
    cin>>n1;
    int arr1[n1];
    cout<<"enter element in arr 1 : ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"enter length of arr 2 : ";
     cin>>n2;
     int arr2[n2];
    cout<<"enter element in arr 2: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    } 
   vector<int>ans;
    for(int i=0;i<n1;i++){
       ans.push_back(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        ans.push_back(arr2[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n1+n2;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}