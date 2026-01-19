#include <stdio.h>

// Check if a number is within a specific range

int main() {
	
	int grade, passing_grade;

    printf("Please insert your grade and passing grade: \n");
    scanf("%d", &grade);

    scanf("%d", &passing_grade);
    
    if(grade>=passing_grade) {
        printf("You have passed!\n");
    } else {
        printf("You have failed.\n");
    }
    
    return 0;

}

