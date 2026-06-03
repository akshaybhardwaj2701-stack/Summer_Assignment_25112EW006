#include<stdio.h>
int main(){
    int n1;
    printf("enter any no: ");
    scanf("%d",&n1);
    
    for(int n=1;n<=n1;n++){
    int isprime=1;
    if(n<=1){
        isprime=0;
    }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isprime=0;
            }
        }
        if(isprime==1){
        printf("%d is a prime no\n",n);
        }
        else{
            printf("%d is not a prime no\n",n);
        }
    }
    return 0;
}