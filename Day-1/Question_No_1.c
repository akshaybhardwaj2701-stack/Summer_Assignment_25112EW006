#include<stdio.h>
int main(){
    int i;
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;

    }
    printf("sum of natural no is :%d",sum );
    return 0;
}
