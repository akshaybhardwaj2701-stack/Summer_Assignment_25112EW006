#include<stdio.h>
int main(){
    int n;
    printf("enter a no:  ");
    scanf("%d",&n);
    int rev=0;
    while(n!=0){
        int n1=n%10;
         rev = rev*10+n1;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}