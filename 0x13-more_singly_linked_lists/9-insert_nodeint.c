#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: head
  * @idx: node index
  * @n: given number
  * Return: The new address otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;

	if (tmp == NULL)
	{
		return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
