#include <stdio.h>

// understanding pointers and creating our first function

void decompose(double to_divide, long *int_part, double *frac_part) {
    *int_part= (long) to_divide;
    *frac_part= to_divide - *int_part;
}

int main() {
	
	double num;
	long intP;
	double fracP;
	// dont touch above here
	
	printf("Enter a number: \n");
	scanf("%lf", &num);
	
	decompose(num, &intP, &fracP);
	printf("%ld - %f \n", intP, fracP);
	
    return 0;

}

