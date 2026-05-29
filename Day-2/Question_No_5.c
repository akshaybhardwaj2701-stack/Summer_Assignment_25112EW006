#include<stdio.h>
int main(){
    int n;
    printf("enter a no: ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int n1=n%10;
        sum =sum+n1;
        n=n/10;
    }
    printf("%d",sum);
    return 0;

}  