#include "lists.h"

/**
 *print_dlistint - a function that prints all elements of dList
 *@h: the head pointer - points to the address of the first node
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
