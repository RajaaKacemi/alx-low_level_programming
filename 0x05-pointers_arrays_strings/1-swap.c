#include "main.h"
/**
 * swap_int: swap the values of two integers a and b
 * @a: integer to swap
 * @b: integer to swap
 * Return: 0 success
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
