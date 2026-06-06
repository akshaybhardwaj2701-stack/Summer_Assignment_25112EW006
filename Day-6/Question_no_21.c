#include<stdio.h>
int main(){
    int n;
    printf("enter any no: ");
    scanf("%d",&n);
    int num=0;
    while(n!=0){
        int n1=n%2;
        num=num*10+n1;
        n=n/2;
    }
    int rev=0;
    while(num!=0){
        int n2=num%10;
        rev=rev*10+n2;
        num=num/10;
    }
    printf("%d",rev);
    return 0;
}