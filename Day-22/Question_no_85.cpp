#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"enter string : ";
    cin>>str;
    char ans[100];
    strcpy(ans,str);
    int n=strlen(str);
    int start=0;
    int end =n-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    if(strcmp(str,ans)==0){
        cout<<"Given string is palindrome";
    }
    else{
        cout<<"Given string is not palindrome";
    }
    return 0;
}