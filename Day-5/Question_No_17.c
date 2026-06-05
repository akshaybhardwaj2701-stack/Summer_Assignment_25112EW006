#include<stdio.h>
int main(){
    int n;
    printf("enter any no : ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
           sum=sum+i;
        }
    }
    if(n==sum){
      printf("%d is a perfect no",n);
    }
    else{
        printf("%d is not a perfect no",n);
    }
    return 0;
}