// SUM OF ARRAY ELEMENTS
// Requirements: 
// - Ask the user for the number of integers (n).
// - Read n integers into an array.
// - Compute the sum of all elements.
// - Print the result.

#include <stdio.h>

int main() {

    // Initialise variable n to hold number of integers
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Initialize array to hold n integers
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        // Read each integer into the array
        scanf("%d", &arr[i]);
    }

    // Initialize sum variable
    int sum = 0;
    // Calculate sum of array elements with a for loop
    for(int i = 0; i < n; i++) {
        // Add each element to sum with assignment operator
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}