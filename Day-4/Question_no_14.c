#include<stdio.h>
int main(){
    int n;
    printf("enter any no:  ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    if(n==0){
        printf("%d",a);
    }
    else if(n==1){
        printf("%d",b);
    }
    for(int i=0;i<=n;i++){
        int nextnum=a+b;
    
        a=b;
        b=nextnum;
       
    }
    printf("%d",b);
    return 0;

}