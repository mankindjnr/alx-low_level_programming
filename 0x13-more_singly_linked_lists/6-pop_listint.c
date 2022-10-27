#include "lists.h"

/**
 *pop_listint - delete the head node
 *@head: pointer to the first node - its address
 *Return: the from the previous head value
 */
int pop_listint(listint_t **head)
{
	int n;

	listint_t *temp;

	if ((*head) == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head);
	*head = (*head)->next;
	free(temp);

	return (n);
}
