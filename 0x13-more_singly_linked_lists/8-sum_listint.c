#include "lists.h"

/**
 *sum_listint - sum the values in the nodes
 *@head: the pointer to the first node - its address
 *Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0, value;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		value = head->n;

		sum += value;

		head = head->next;
	}
	return (sum);
}
