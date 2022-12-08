#include "lists.h"

/**
 *dlistint_len - function to count the number of elements in a Dlist
 *@h: the head pointer - points to the address of the first node
 *Return: the number of nodes in dList
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
