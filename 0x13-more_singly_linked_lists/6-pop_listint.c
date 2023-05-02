#include "lists.h"

/**
  * pop_listint - Deletes the head of a node
  * @head: pointer to heade
  *
  * Return: the head otherwise 0
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;
	return (num);
}
