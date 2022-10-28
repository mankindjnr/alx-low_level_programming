#include "lists.h"

/**
 *free_list - free a linked list memory iteratively
 *@head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
