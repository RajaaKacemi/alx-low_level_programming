#include "lists.h"

/**
  * delete_nodeint_at_index - deletes a new node at a given position
  * @head: head
  * @index: node index
  *
  * Return: 1 Success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *tmp1;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1 && tmp->next != NULL; i++)
		tmp = tmp->next;

	if (tmp->next == NULL)
	{
		return (-1);
	}
	tmp1 = tmp->next;
	tmp->next = tmp1->next;
	free(tmp1);
	return (1);
}
