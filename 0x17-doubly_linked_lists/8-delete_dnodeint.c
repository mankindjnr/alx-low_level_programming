#include "lists.h"

/**
 *delete_dnodeint_at_index - delete at indes
 *@index: the position
 *@head: the head pointer
 *Return: 1 on success 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int  i = 0;
	dlistint_t *temp;
	int initialSize, afterSize;

	initialSize = sizeof(dlistint_t);
	temp = *head;

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			i++;
		}

		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}

	afterSize = sizeof(dlistint_t);

	if ((initialSize - 1) != afterSize)
		return (-1);

	return (1);
}
