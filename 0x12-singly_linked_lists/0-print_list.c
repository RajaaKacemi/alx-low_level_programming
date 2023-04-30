#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @*h: a pointer to a list
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if( h == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("%s\n", h->str);
		count++;
	}
	return (count);
}

	
