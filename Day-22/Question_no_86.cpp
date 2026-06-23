#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char sentence[100];
    cout<<"enter sentence : ";
    cin.getline(sentence,100);
     int n=strlen(sentence);
    int count = 0;
    for(int i=0;i<n;i++){
        if(sentence[i]==' '){
            count++;
        }
    }
    cout<<"No of words are : "<<count+1;
}