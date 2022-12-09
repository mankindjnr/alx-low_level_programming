#include "lists.h"

/**
 *delete_dnodeint_at_index - delete at indes
 *@index: the position
 *@head: the head pointer
 *Return: 1 on success 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int  i;
	dlistint_t *temp;
	int initialSize, afterSize;

	int correct = dlistint_len(&(*head));
	initialSize = sizeof(dlistint_t);
	printf("the size is: %d\n", correct);
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
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
		}

		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}

	afterSize = sizeof(dlistint_t);
	printf("the new size %d\n", afterSize);

	if ((initialSize - 1) != afterSize)
		return (-1);

	return (1);
}
