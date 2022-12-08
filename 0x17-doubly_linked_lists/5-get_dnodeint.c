#include "lists.h"

/**
 *get_dnodeint_at_index - retrive
 *@head: head pointer
 *@index: position
 *Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nthnode;
	unsigned int i = 0;

	nthnode = head;

	for (i = 0; nthnode != NULL && i < index; i++)
	{
		nthnode = nthnode->next;
	}

	if (index > i)
		return (NULL);

	return (nthnode);
}
