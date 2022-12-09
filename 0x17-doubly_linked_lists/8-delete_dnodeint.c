#include "lists.h"

/**
 *list_length - the length of a list
 *@head: pointer to the head node
 *Return: the size of the list
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
/**
 *deleteAtEnd - delete a node at the end
 *@head: the head pointer node
 */
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
/**
 *deleteAtBeg - delete the first node
 *@head: the head node pointer
 */
void deleteAtBeg(dlistint_t **head)
{
	dlistint_t *temp;

	temp = *head;

	*head = temp->next;
	if (temp->next != NULL)
		(*head)->prev = NULL;
	free(temp);
}
/**
 *delete_dnodeint_at_index - deete node at given index
 *@head: the head node pointer
 *@index: the given index
 *Return: 1 is successful -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		deleteAtBeg(&(*head));
		return (1);
	}
	temp = *head;

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp->next;

			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
