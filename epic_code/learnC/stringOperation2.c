// Exercise: Read two strings, compare using strcmp(), 
// output: "Equal", "First < Second", or "First > Second"

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    scanf("%99s %99s", str1, str2);
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Equal\n");
    } else if(result < 0) {
        printf("First < Second\n");
    } else {
        printf("First > Second\n");
    }

    return 0;
}
