#include "main.h"
#include <stdlib.h>
/**
 * *_strdup: a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter.
 * @str: String
 * Return: Null if str is null or if insufficient memory was available
 * or the copy of string (Success)
 */

char *_strdup(char *str)
{
	int i, size = 0;
	char *Cstrg;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	Cstrg = malloc(sizeof(char) * size);
	if (Cstrg == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		Cstrg[i] = str[i];
	return (Cstrg);
}
