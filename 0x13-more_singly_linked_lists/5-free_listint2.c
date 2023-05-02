#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: pointer at the head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *new, *cHead;

	cHead = *head;

	if (head == NULL)
		return;

	while (cHead != NULL)
	{
		new = cHead->next;
		free(cHead);
		cHead = new;
	}
	*head = NULL;
}
