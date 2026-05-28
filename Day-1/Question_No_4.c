#include<stdio.h>
int main(){
    int n;
    printf("enter a no : ");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        count ++;
        n=n/10;
        printf("%d\n ",n);
    }
    printf("%d",count);
    return 0;
}