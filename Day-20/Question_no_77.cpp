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
     int row;
    cout<<"enter rows of an matr :";
    cin>>row;
    int col;
    cout<<"enter columns of an matr :";
    cin>>col;

    int brr[row][col];
    cout<<"enter element in matrix  ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             cin>>brr[i][j];
        }
       cout<<endl;
    }
    if(row!=n1||col!=n2){
        cout<<"Not possible";
    }
    else{
        int crr[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
           crr[i][j]=arr[i][j]brr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
          cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }
}