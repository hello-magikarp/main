#include <stdio.h>

// check if input number is divisble by 3

int main() {
    
    int num, divisible;
    divisible = num % 3;
    printf("Please choose a number\n");
    scanf("%d", & num);
    if (divisible == 0) {
        printf("Divisible by 3");
    } else {
        printf("Not divisible by 3");
    }

    return 0;
}