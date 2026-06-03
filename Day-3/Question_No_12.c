#include<stdio.h>
int main(){
    int n1;
    printf("enter no 1 : ");
    scanf("%d",&n1);
    int n2;
    printf("enter no 2 : ");
    scanf("%d",&n2);
    int maxnum;
    if(n1>n2){
         maxnum=n1;
    }
    else{
         maxnum=n2;
    }
    while(1){
        if(maxnum%n1==0&&maxnum%n2==0){
            break;
           
        }
         maxnum++;
    }
    printf("LCM is %d",maxnum);
    return 0;
}