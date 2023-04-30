#include "lists.h"

/**
 *add_node - a function that adds a new node at the beginning of a list 
 *@str: the element that its goin to be added 
 *@head: the head of the list
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	while (str[len])
		len++;

	temp->str = strdup(str);
	temp->next = *head;
	temp->len = len;
	*head = temp;
	return (*head);
}

