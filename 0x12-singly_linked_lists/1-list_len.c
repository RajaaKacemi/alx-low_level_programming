#include "lists.h"
/**
 *list_len - a function that returns the number of elements at a list
 *@h: a pointer to the nodes of the list.
 *Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t nElem = 0;

	while (h)
	{
		h = h->next;
		nElem++;
	}
	return (nElem);
}

