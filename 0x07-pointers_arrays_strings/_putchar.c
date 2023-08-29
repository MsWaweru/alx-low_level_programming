#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 *
 * Return: 1 if successful
 * On error, -1 is returned and errno is set approriately
 */
int_putchar(char c)
{
	return(write(1, &c, 1));
}
