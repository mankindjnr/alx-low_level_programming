#include "lists.h"

/**
 *print_list - printing all elements of a list
 *@h: pointer to a struct - i think
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int num = 0;

	if (h == NULL)
	{
	        return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		num++;
	}
	return (num);
}
