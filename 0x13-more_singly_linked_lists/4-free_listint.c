#include "lists.h"

/**
 *free_listint - freeing the nodes
 *@head: the pointer to the first node - adress of first node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
