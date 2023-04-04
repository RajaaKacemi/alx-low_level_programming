#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int L = 0;
	int i;

	while (*s != '\0')
	{
		L++;
		s++;
	}
	s--;
	for (i = L; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
