#include "lists.h"

/**
 *free_dlistint - freeing a doubly linked list
 *@head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
