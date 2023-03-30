#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: 0 success
 */
void print_alphabet(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
		_putchar(L);
	_putchar('\n');
}
