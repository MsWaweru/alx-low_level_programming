#include <stdio.h>
#include "main.h"

/**
 * main - A program printing number of arguments passed in it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 Always if successful
 */
int main(int argc, char *argv[])
{
	(void) argv;/*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
