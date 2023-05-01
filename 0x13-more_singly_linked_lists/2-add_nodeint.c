#include "lists.h"

/**
  * add_nodeint - a function that adds a new node at the beginning
  * @head: a pointer to the head of the list
  * @n: the element that its goin tobe added
  * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
