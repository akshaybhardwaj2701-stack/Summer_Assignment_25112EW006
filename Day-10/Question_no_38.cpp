#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=5;i>=1;i--){
        for(int space=1;space<=n-i;space++){
            cout << " ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}