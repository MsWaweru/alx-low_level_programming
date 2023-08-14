#include <stdio.h>

/**
 * main -Print lowercase alphabets ommiting q and e
 *
 * Return:0 if successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
