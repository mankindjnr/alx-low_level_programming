#include "lists.h"

/**
 *delete_dnodeint_at_index - delete at indes
 *@index: the position
 *@head: the head pointer
 *Return: 1 on success 0 otherwise
 */

size_t list_length(dlistint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}

	return (count);
}

void deleteAtEnd(dlistint_t **head)
{
	dlistint_t *tail;

	tail = *head;

	while (tail != NULL)
	{
		tail = tail->next;
	}

	tail->prev->next = NULL;
	tail->prev = NULL;
	free(tail);
}

void deleteAtBeg(dlistint_t **head)
{
	dlistint_t *temp;

	temp = *head;

	*head = (*head)->next;
	(*head)->prev = NULL;
        free(temp);
}

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;
	size_t correct = list_length(*head);
	printf("the size is: %ld\n", correct);
	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index > list_length(*head))
		return (-1);

	if (index == 0)
	{
		deleteAtBeg(&(*head));
	}
	else if (index == list_length(*head))
	{
		deleteAtEnd(&(*head));
	}
	else
	{
		for (i = 0; temp != NULL && i < index; i++)
		{
			temp = temp->next;
		}

		if (temp == NULL)
			return (-1);

		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;

		if (*head == temp)
			*head = temp->next;

		free(temp);
	}

	printf("the new size %ld\n", list_length(*head));

	return (1);
}
