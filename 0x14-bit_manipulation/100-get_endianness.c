#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 1 for little, 0 for big.
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
