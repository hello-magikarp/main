#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number) 
{
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= number; i++) {
        sum += i * i;
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number) 
{
	unsigned int square = 0;
	for(unsigned int i = 1; i <= number; i++) {
		square += i;
	}
    return square * square;

}

unsigned int difference_of_squares(unsigned int number) 
{
	unsigned int sumSquares = sum_of_squares(number);
	unsigned int squareSum = square_of_sum(number);
    return squareSum - sumSquares;
}