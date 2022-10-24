#include "lists.h"

/**
 *print_list - printing all elements of a list
 *@h: pointer to a struct - i think
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int len;

	if (h == NULL)
	{
		printf("[0] (nil\n");
		return (1);
	}

	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
		len++;
	}

	return (len);
}
