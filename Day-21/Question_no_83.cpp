#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"enter string : ";
    cin>>str;
    int vowel=0;
    int consonant=0;
    for(int i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    cout<<"no of vowel is : "<<vowel<<endl;
    cout<<"no of consonant is : "<<consonant<<endl;
    return 0 ;
}