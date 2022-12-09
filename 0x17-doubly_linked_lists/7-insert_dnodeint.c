#include "lists.h"

/**
 *list_len - length of a d list
 *@h: the head node pointer
 *Return: the size of the list
 */
size_t list_len(dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
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

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		newnode = add_dnodeint(&(*h), n);
	}
	else if (idx == list_len(*h))
	{
		newnode = add_dnodeint_end(&(*h), n);
	}
	else
	{
		newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);

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
