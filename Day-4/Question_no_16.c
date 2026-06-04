#include <stdio.h>
#include <math.h>

int main() {
    int i;
    for (i = 0; i <= 100; i++) {
        int temp = i;
        int digits = 0;
        int sum = 0;
        int temp1=temp;
        if (temp == 0)
            digits = 1;
        else {
            while (temp != 0) {
                digits++;
                temp /= 10;
            }
        }

       int num=temp1;

        while (temp1 != 0) {
            int r = temp1 % 10;
            sum +=pow(r, digits);
            temp1 /= 10;
        }

        if (sum == num)
            printf("%d ", i);
    }

    return 0;
}
