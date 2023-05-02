#include "lists.h"

/**
  * reverse_listint - reverses listint list
  * @head: head
  *
  * Return: a pointer the first node of the list otherwise NULL
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL, *travers;

	while (*head != NULL)
	{
		travers = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = travers;
	}
	*head = tmp;
	return (*head);
}
