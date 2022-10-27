#include "lists.h"

/**
 *print_listint - print all the elements of a list
 *@h: the head pointer - points to the first node address
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL) /*checks if the address part is null*/
	{
		printf("%d\n", h->n); /*points to the value*/
		h = h->next; /* points to the address part of the node*/
		count++;
	}
	return (count);
}
