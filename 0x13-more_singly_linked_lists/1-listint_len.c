#include "lists.h"

/**
  * listint_len - a function that returns the number of elements in a list.
  * @h: the pointer to the list
  * Return: the number of elemnent in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t nElem = 0;

	while (h)
	{
		h = h->next;
		nElem++;
	}
	return (nElem);
}
