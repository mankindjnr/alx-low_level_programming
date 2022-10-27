#include "lists.h"

/**
 *pop_listint - delete the head node
 *@head: pointer to the first node - its address
 *Return: the new head value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = (*head);
	*head = (*head)->next;
	free(temp);

	return ((*head)->n);
}
