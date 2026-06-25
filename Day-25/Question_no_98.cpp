#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;
    cout<<"enter string : ";
    getline(cin,str);
    int n=str.length();
    for(int i=0;i<n;i++){
        bool visited =0;
        for(int k=0;k<i;k++){
            if(str[i]==str[k]){
                visited=1;
                break;
            }
        }
        if(visited==1){
           continue;
        }
        else{
            for(int j=i+1;j<n;j++){
                if(str[i]==str[j]){
                    cout<<str[i];
                    break;
                }
            }
        }
    }
    return 0;
}