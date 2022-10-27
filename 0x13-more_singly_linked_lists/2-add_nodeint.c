#include "lists.h"

/**
 *add_nodeint - add a node at the beginning of a singly linked list
 *@head: the pointer to the first node
 *@n: the numberto assign to new node
 *Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	if (*head == NULL)
		return (NULL);
	else
		return (*head);
}
