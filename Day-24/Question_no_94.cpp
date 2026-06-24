#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str1;
    cout<<"enter string : ";
    getline(cin,str1);
    string ans;
    int n=str1.length();
    for(int i=0;i<n;i++){
        int count =0;
        bool visited=false;
        for(int k=0;k<i;k++){
            if(str1[i]==str1[k]){
                visited=true;
                break;
            }
        }
        if(visited){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(str1[i]==str1[j]){
                count++;            
            }
        }
        
         ans.push_back(str1[i]);
       ans+=to_string(count+1);
       
       
        
    }
    cout<<ans;
    return 0;
}