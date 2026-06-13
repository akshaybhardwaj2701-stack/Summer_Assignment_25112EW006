#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    int i;
    int even=0;
    int odd=0;
    cout<<"enter no in array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
           even++;
        }
        else{
            odd++;
        }
    }
    cout<<"no of even element : "<<even<<endl;
    cout<<"no of odd element : "<<odd<<endl;
    return 0;
}