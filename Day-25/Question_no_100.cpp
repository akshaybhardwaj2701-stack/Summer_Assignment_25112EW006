#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
bool compareLength(string a, string b) {
    return a.length() < b.length();
}
int main(){
    int n;
    cout<<"enter no of names: ";
    cin>>n;
    vector<string>ans(n);
    cout<<"enter names : ";
    for(int i=0;i<n;i++){
       cin>>ans[i];
    }
    sort(ans.begin(),ans.end(),compareLength);
    for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
    }
    return 0;
}