#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter any no : ");
    scanf("%d",&n);
    int n1=n;
    int digit=0;
    while(n!=0){
         digit++;
          n=n/10;
    }
    int n2=n1;
    int sum = 0;
    while(n1!=0){
        int r=n1%10;
         sum=sum+pow(r,digit);
        n1=n1/10;
    }
    if(n2==sum){
        printf("%d is armstrong no ",n2);
    }
    else{
        printf("%d is not a armstring no",n2);
    }
    return 0;
}