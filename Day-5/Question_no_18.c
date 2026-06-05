#include<stdio.h>
int main(){
    int n;
    printf("enter a no: ");
    scanf("%d",&n);
    
    int num=n;
    int result=0;
    while(n!=0){
        int n1=n%10;
        int fact =1;
        for(int i=1;i<=n1;i++){
            fact=fact*i;
        }
        result=result+fact;
        n=n/10;
        
    }
    if(num==result){
        printf("%d is strong no",num);
    }
    else{
        printf("%d is not a strong no",num);
    }
    return 0;
    
}