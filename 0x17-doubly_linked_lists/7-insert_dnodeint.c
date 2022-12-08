#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node at position
 *@idx: the position
 *@n: the value to insert
 *@h: the head pointer
 *Return: the address of the newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	if (idx == 0)
	{
		newnode->n = n;
		newnode->prev = NULL;
		(*h)->prev = newnode;
		newnode->next = *h;
		*h = newnode;
	}
	else
	{
		temp = *h;
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}

		newnode->n = n;
		newnode->prev = temp;
		newnode->next = temp->next;
		temp->next = newnode;
		newnode->next->prev = newnode;
	}

	return (newnode);
}
