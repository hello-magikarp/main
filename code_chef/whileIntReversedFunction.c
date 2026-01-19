#include <stdio.h>

// Reverse A Number

int reverse_num(int number) {
    
    int reversedNum=0;
    int remainder;
    
    while(number!=0) {
        
        remainder = number % 10;    // Get last digit
        reversedNum = reversedNum * 10 + remainder; // Build reversedNum
        number /= 10;   // Remove the last digit from the original number
        
    }
    return reversedNum;
}
// FUNCTION ABOVE !!!
// DO NOT TOUCH.

int main() {

    int input, tupni;
    
    printf("Enter a Number:\t");
    scanf("%d", &input);
    printf("%d\n", input);
    // Call the function and store reversedNum in reversed input
    tupni = reverse_num(input);
    
    printf("Reversed Number: %d", tupni);
    return 0;
}

