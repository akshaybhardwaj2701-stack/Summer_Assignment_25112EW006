#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter no of names: ";
    cin>>n;
    vector<string>ans(n);
    cout<<"enter names : ";
    for(int i=0;i<n;i++){
       cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
    }
    return 0;
}