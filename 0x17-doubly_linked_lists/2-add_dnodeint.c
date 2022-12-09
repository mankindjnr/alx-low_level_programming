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

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		newnode->n = n;
		*head = newnode;
	}
	else
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}

	return (newnode);
}
