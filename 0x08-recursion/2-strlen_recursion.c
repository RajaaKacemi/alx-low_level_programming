#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: String
 * Return: @lent is length of string
 */
int _strlen_recursion(char *s)
{
	int lent = 0;

	if (*s)
	{
		lent++;
		s++;
		lent += _strlen_recursion(s);
	}
	return (lent);
}
