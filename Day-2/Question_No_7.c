#include<stdio.h>
int main(){
    int n;
    printf("enter a no:  ");
    scanf("%d",&n);
    int product =1;
    while(n!=0){
        int n1=n%10;
        product = product * n1;
        n=n/10;
    }
    printf("%d",product);
    return 0;
}