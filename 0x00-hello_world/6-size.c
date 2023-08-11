#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 *
 * Return:0(if successful)
 */

int main(void)
{
	printf("Size of a char:%x byte(s)\n", sizeof(char));
	printf("Size of a int:%x byte(s)\n", sizeof(int));
	printf("Size of a long int:%x byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%x byte(s)\n", sizeof(long long int));
	printf("Size of a float:%x byte(s)\n", sizeof(float));
	return (0);
}
