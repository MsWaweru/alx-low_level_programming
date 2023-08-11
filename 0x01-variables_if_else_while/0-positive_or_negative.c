#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that assigns random number to variable n
 * Return:0 (if successful)
 */

int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (n > 0)
		printf("%d is positive\n", n);
	while (n = 0)
		printf("%d is zero\n", n);
	while printf("%d is negative\n", n);
	return (0);
}
