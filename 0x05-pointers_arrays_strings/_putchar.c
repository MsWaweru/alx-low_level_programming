#include<unistd.h>

/**
 * _putchar - A character is written to the standard output(stdout)
 * @c: Character to be written
 *
 * Return: If successful, returns the character writtenas as an unsigned char cast to an int.
 * On error, returns -1 and sets errno appropriately.
 */

int _putchar(char c)
{
	return write(1,&c,1);
}
