#include<stdio.h>
int main(){
    int n;
    printf("enter any no:  ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            int fact =i;
            printf("%d   ",fact);
        }
    }
    return 0;
}