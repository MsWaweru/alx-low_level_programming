#include <stdio.h>
/**
 * main - numbers of base 16
 *
 * Return:0 if successful
 */

int main(void)
{
	int x;
	char k;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	for (k = 'a'; k <= 'f' ; k++)
		putchar(k);
	putchar('\n');
		return (0);
}
