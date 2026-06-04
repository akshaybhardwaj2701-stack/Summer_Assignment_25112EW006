#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int n;
    printf("enter any no:  ");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    for (int i=0;i<=n;i++){
        int nextnum=a+b;
        a=b;
        b=nextnum;
        printf("%d\n",nextnum);
    }
    return 0;
}