#include "lists.h"

/**
 *reverse_listint - reverse a list
 *@head: pointer to first node
 *Return: pointer to the reversed frist node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;

	return (*head);
}
