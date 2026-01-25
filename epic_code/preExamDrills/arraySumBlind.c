// Code requirements:
// 1. prompt the user to insert the number n of int elements
// 2. read each number of the n total into the array
// 3. calculate the sum of all elements
// 4. print the result

#include <stdio.h>

int main() {
	int n;
	printf("Enter number of integer array elements: ");
	scanf("%d", &n);
	
	int arr[n];
	int *p = arr;
	
	printf("Enter %d numbers: \n", n);
	for(; p < arr+n ; p++) {
		scanf("%d", p);
	}
	
	int sum = 0;
	int *ps = arr;
	
	for(; ps < arr+n; ps++) {
		sum += *ps;
	}
	printf("The sum of all elements is: %d\n", sum);
	
	return 0;
}
