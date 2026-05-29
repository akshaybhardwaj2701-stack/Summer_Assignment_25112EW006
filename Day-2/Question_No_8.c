#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse) {
        printf("Palindrome number");
    } else {
        printf("Not a palindrome number");
    }
    return 0;
}