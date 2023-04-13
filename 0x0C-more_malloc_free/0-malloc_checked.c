#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - a function that allocates memory using malloc.
 *@b:the size
 *Return: a pointer or 98 if its fails.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
