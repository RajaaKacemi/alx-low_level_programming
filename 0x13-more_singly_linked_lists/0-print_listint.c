#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 * @h: th pointer that pointe at the head of the list
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t nEle = 0;

	while (h)
	{
		printf("%u\n", h->n);
		nEle++;
		h = h->next;
	}
	return (nEle);
}

