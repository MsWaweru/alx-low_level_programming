#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character c that stands out
 * @c: character to be printed
 *
 * Return:1 if successful
 * On error, -1 is returned and errno is correctly set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
