#include <stdio.h>

// understanding pointers

int main() {
	
	int value, *p;
	value = 10;
	p = &value;
	
	printf("The value is: %d\n", value);
	printf("The address is: %p\n", &value);
	printf("Let's see if pointer checks out: %d\n", *p);
	printf("Is it the same as the fist line?");
	
    return 0;

}

