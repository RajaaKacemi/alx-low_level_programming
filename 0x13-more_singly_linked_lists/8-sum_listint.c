#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n)
  * @head: head
  *
  * Return: the sum otherwise 0
  */
int sum_listint(listint_t *head)
{
	int num = 0;

	if (head != NULL)
	{
		num = head->n + sum_listint(head->next);
	}
	return (num);
}
