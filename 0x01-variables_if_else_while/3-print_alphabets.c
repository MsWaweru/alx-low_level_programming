#include <stdio.h>
/**
 * main- Point of Entry
 *
 * Return:0 if successful
 */

int main(void)
{
	char i;

	for  (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
