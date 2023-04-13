#include "main.h"
#include <stdlib.h>

/**
 *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: the number of elements.
 * @size: size of bytes
 * Return: NULL if @nmemb or size equal to 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	ptr[i] = 0;
	return (ptr);
}
