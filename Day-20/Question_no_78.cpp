#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter rows of an matrix : ";
    cin>>row;
    int column;
    cout<<"enter column of an matrix: ";
    cin>>column;
    int arr[row][column];
          if(row!=column){
        cout<<"matrix is not symmetric ";
        return 0;
    }
    cout<<"enter element in matrix: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int flag=1;
    for(int i=0;i<row;i++){
         for(int j=0;j<column;j++){
            if(arr[i][j]!=arr[j][i]){
                flag=0;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag==1){
        cout<<"matrix is symmetric  ";
    }
    else{
        cout<<"matrix is not symmetric  ";
    }
    return 0;



}