#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter rows of an matr :";
    cin>>n1;
    int n2;
    cout<<"enter columns of an matr :";
    cin>>n2;
    int arr[n1][n2];
    cout<<"enter element in matrix :  ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
             cin>>arr[i][j];
        }
       cout<<endl;
    }
    cout<<"Before transposing : "<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After transposing : "<<endl;
    for(int i=0;i<n2;i++){
        for(int j=0;j<n1;j++){
             cout<<arr[j][i]<<" ";
        }
       cout<<endl;
    }
    return 0;
}