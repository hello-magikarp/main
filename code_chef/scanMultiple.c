#include <stdio.h>
// this little program takes multiple input
int main() {
	
	int num1;
	double num2;
	
	printf("Enter two numbers: \n");
	scanf("%d%lf", &num1, &num2);
	
	printf("num1 = %d\n", num1);
    printf("num2 = %lf", num2);
    
    return 0;

}

