#include "lists.h"

/**
 *sum_dlistint - sum the data in a d list
 *@head: the head pointer
 *Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
