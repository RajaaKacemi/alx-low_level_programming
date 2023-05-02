#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: the head of the list
 * @n: the element added
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	while (temp->next)
		temp = temp->next;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp->next = new;

	return (new);
}
