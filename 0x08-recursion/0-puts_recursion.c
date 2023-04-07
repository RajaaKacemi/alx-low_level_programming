#include "main.h"
/**
 * _puts_recursion -  a function that prints a string.
 *@s: the String
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{	
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
}
