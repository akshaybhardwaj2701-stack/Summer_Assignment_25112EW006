#include<iostream>
#include<cstring>
using namespace std;
int main(){
      string str;
      cout<<"enter string : ";
      getline(cin,str);
      string str1;
      int n=str.length();
      for(int i=0;i<n;i++){
        if(str[i]!=' '){
            str1.push_back(str[i]);
        }
        else{
            continue;
        }
      }
      cout<<"after removing space : "<<str1;
      return 0;
}