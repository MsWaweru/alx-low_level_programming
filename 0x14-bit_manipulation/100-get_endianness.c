#include "main.h"

/**
 * get_endianness - it will check if a machine is little or big endian
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
