#include "lists.h"

/**
 *insert_nodeint_at_index - insertion of a node at a given position
 *@head: pointer to the first node
 *@idx: position of the new node
 *@n: the new value at index(node)
 *Return: the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i, count = 0;

	while (*head)
	{
		count++;
		*head = (*head)->next;
	}

	if (idx > count)
		return (NULL);

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
			*head = (*head)->next;
		newnode->next = (*head)->next;
		temp = (*head)->next = newnode;

	}

	return (temp);
}
