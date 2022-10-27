#include "lists.h"

/**
 *add_nodeint_end - add a new node at the end of asingly linked list
 *@head: pointer to the first node - the address of first node
 *@n: the new value to assign in the new node
 *Return: the address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = 0;

	temp = *head;

	if (*head == 0)
	{
		*head = newnode;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	if (temp->next == NULL)
		return (NULL);
	else
		return (temp->next);
}
