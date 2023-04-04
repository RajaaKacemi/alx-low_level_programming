#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: String
 * Return: Length @L.
 */
int _strlen(char *s)
{
	int L = 0;

	while (*s != '\0')
	{
		L++;
		s++;
	}
	return (L);
}
