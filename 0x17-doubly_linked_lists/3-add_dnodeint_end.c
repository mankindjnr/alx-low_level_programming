#include "lists.h"

/**
 *add_dnodeint_end - adding a node at the end of the list
 *@head: the head pointer
 *@n: the element to add
 *Return: the new node address/pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *lastnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	lastnode = *head;

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;
	newnode->prev = lastnode;

	return (newnode);
}
