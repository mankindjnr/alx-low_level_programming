#include "lists.h"

/**
 *free_listint2 - free a singly linked list
 *@head: pointer to the first node - its address
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((*head) != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
