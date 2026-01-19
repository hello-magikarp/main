#include <stdio.h>
#define ARRAY_SIZE 5
// understanding pointers and their relation to arrays

int main() {
	
	int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};
	
	for(int *p = arr; p < &arr[ARRAY_SIZE] ; p++) {
	    printf("Memory Address: %p\nIndex Element: %d\n", &p, *p);
	}
	
    return 0;

}

