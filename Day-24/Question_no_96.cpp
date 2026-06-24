#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;
    cout<<"enter string : ";
    getline(cin,str);
    int n=str.length();
    string ans;
    for(int i=0;i<n;i++){
        bool visited=0;
        for(int k=0;k<i;k++){
            if(str[i]==str[k]){
                visited=1;
                break;
            }
        }
        if(visited){
            continue;
        }
       else{
        ans.push_back(str[i]);
       }
        
        
    }
     cout<<ans;
   
    return 0;
}