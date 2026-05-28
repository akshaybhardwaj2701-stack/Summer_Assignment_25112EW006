#include<stdio.h>
int main(){
    int n;
    printf("enter a no : ");
    scanf("%d",&n);
    int fact = 1;
    for(int i=1;i<=10;i++){
        fact=n*i;
        printf("%d\n",fact);
    }
    return 0;
}