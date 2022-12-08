#include "lists.h"

/**
 *add_dnodeint - add a node at the beginning
 *@head: the head pointer - points to the first node
 *@n: the new element to insert
 *Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (*head == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}

	return (newnode);
}
