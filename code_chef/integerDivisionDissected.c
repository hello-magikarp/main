#include <stdio.h>

// this little program prints the quotient and remainder
// of an integer division, demonstrating wether they're divisible

int main() {
	
	int a = 13, b = 4;
	int quotient, remainder;
	
    quotient = a / b;
    remainder = a % b;
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d", remainder);
    
    return 0;

}

