#include "lists.h"

/**
 *get_nodeint_at_index - access the nth node
 *@head: pointer to the first node - its address
 *@index: the position of node to access
 *Return: the accesses node(nth)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
		{
			node = head;
		}
		else
		{
			head = head->next;
		}
		count++;
	}

	if (index > count)
		return (NULL);
	else
		return (node);

}
