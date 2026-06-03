#include<stdio.h>
int main(){
    int n;
    printf("enter no to be checked ");
    scanf("%d",&n);
    int isprime=1;
    if(n<=1){
       isprime=0;
    }
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime){
        printf("%d is prime no",n);
    }
    else{
        printf("%d is not a prime no",n);
    }
    return 0;
}