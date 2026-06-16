#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"enter size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter element of an array : ";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int count =0;
    int nums[n];
    for( i =0;i<n;i++){
         int a=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                a=j;
            }
            else{
                break;
            }
        
        }
    nums[count]=arr[i];
    count ++;
    i=a;

    }
    cout<<"after removing duplicates : ";
       for(int k =0;k<count;k++){
        cout<<nums[k]<<" ";
       }
        return 0;
}