#include <stdio.h>
#include <string.h>

// count chars in string

int main() {

	char string[] = "Ciao";
	char *p = string;
	int count = 0;

	while(*p != '\0') {
		count++;
		p++;
	}
	printf("Number of characters: %d\n", count);
	printf("String length using strlen(): %lu\n", strlen(string));
	
	return 0;

}
