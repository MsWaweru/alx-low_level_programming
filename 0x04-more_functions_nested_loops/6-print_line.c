#include "main.h"

/**
 * print_line - a straight line is drawn on thev terminal
 * @n: number of times character is printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int x;

	for (x = 1; x <= n; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
