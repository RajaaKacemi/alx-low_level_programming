#include "lists.h"

/**
  * free_listint - frees a list
  * @head: head
  * Return: Nothing
  */

void free_listint(listint_t *head)
{
	listint_t *nextNode;

	while (head != NULL)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}
