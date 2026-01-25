#include <stdio.h>
#include <string.h>

// Demonstrates safe string concatenation with buffer overflow protection
// using strlen() to verify available space before strcat()

#include <stdio.h>
#include <string.h>

int main() {
    char base[10] = "Hi";
    char extra[] = " there!";

    if (strlen(base) + strlen(extra) + 1 <= sizeof(base)) {
        strcat(base, extra);
        printf("%s\n", base);
    } else {
        printf("Not enough space to concatenate.\n");
    }

    return 0;
}
