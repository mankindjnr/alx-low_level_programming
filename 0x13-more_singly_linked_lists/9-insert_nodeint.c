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
	unsigned int count = 0, i = 1;
	listint_t *newnode, *temp, *node;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		(*head) = (*head)->next;
		count++;
	}
	if (idx > count)
		return (NULL);

	temp = (*head);

	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	node = temp->next;

	if (node == NULL)
		return (NULL);
	else
		return (node);
}
