#include "main.h"
/**
 * swap_int - A function that swaps integer values
 * @a: interger to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
