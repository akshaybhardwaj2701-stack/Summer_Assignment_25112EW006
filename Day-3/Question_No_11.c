#include<stdio.h>
int main(){
    int n1;
    printf("enter no 1 : ");
    scanf("%d",&n1);
    int n2;
    printf("enter no 2 : ");
    scanf("%d",&n2);
    int gcd;
    for(int i=1;i<=n1&&i<=n2;i++){
        if(n1%i==0&&n2%i==0){
           gcd=i;
        }
        
    }
    printf("GCD=%d",gcd);
return 0;
    }

