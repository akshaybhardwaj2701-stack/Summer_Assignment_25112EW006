#include<stdio.h>
int main(){
    int n;
    printf("enter any binary no : ");
    scanf("%d",&n);
   int sum=0;
   int base=1;
   while(n!=0){
    int n1=n%10;
    sum=sum+n1*base;
    base=base*2;
    n=n/10;
   }
   printf("%d is a decimal no",sum);
   return 0;
}