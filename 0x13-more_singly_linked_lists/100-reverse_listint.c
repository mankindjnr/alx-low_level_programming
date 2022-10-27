#include "lists.h"

/**
 *reverse_listint - reverse a list
 *@head: pointer to first node
 *Return: pointer to the reversed frist node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *currentNode;

	if ((*head) != NULL)
	{
		prevNode = (*head);
		currentNode = (*head)->next;
		*head = (*head)->next;

		prevNode->*next = NULL;

		while((*head) != NULL)
		{
			*head = (*head)->next;
			currentNode->*next = prevNode;

			prevNode = currentNode;
			currentNode = (*head);
		}

		*head = prevNode;
	}
	return (*head);
}
