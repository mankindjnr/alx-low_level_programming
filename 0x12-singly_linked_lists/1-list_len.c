#include "lists.h"

/**
 *list_len - return the number of elements in a linked list
 *@h: pointer to struct - i think
 *Return: the number of elements in a list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h -> next;
		count++;
	}
	return (count);
}
