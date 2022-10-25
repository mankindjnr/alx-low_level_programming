#include "lists.h"

/**
 *add_node_end - add a node at the end
 *@head: pointer of the first node
 *@str: the string to copy to the incoming node
 *Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = (list_t *)malloc(sizeof(list_t));

	temp = *head;

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->next = 0;

	if (*head == 0)
	{
		*head = newnode;
		return (*head);
	}

	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (temp->next);
}
