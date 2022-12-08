#include "lists.h"

/**
 *get_dnodeint_at_index - retrieve node at index
 *@head: head pointer
 *@index: node position
 *Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		temp = temp->next;
		count++;

		if (count == index)
			break;
	}

	if (index > count)
		return (NULL);

	return (temp);
}
