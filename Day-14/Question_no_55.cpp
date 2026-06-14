#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of arr: ";
    cin>>n;
    int i;
    int arr[n];
    cout<<"enter element in array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int firstlargest=arr[0];
    int secondlargest=0;
    for(i=0;i<n;i++){
        if(firstlargest<arr[i]){
            secondlargest=firstlargest;
            firstlargest=arr[i]; 
        }
    }
    cout<<"secondlargest is : "<<secondlargest;
    return 0;
}