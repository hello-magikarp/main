#include <stdio.h>

// this little program prints the same numbers divided
// with an output as int and float

int main() {
	
	int a = 13, b = 4, int_divide;
	float c = 13, d = 4, float_divide;
	
    int_divide = a / b;
    float_divide = c / d;
    printf("Int division: %d\n", int_divide);
    printf("Float division: %.2f", float_divide);
    
    return 0;

}

