#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    int n=strlen(str);
    cout<<"enter a string: ";
    cin>>str;
    int start=0;
    int end=n-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    cout<<str;
     
    return 0;
}