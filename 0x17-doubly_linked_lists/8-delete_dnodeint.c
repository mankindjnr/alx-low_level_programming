#include "lists.h"

/**
 *list_length - the length of a list
 *@head: pointer to the head node
 *Return: the size of the list
 */
size_t list_length(dlistint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}

	return (count);
}
/**
 *deleteAtEnd - delete a node at the end
 *@head: the head pointer node
 */
void deleteAtEnd(dlistint_t **head)
{
	dlistint_t *tail;

	tail = *head;

	while (tail != NULL)
	{
		tail = tail->next;
	}

	tail->prev->next = NULL;
	tail->prev = NULL;
	free(tail);
}
/**
 *deleteAtBeg - delete the first node
 *@head: the head node pointer
 */
void deleteAtBeg(dlistint_t **head)
{
	dlistint_t *temp;

	temp = *head;

        *head = (*head)->next;
	(*head)->prev = NULL;
        free(temp);
}
/**
 *delete_dnodeint_at_index - deete node at given index
 *@head: the head node pointer
 *@index: the given index
 *Retuen: 1 is successful -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	size_t size_of_list;
	dlistint_t *temp;
	size_of_list = list_length(*head);
	printf("the size is: %ld\nindex is: %d\n", size_of_list, index);

	if (index < size_of_list)
	{
		if (index == 0)
		{
			deleteAtBeg(&(*head));
		}
		else if (index == (list_length(*head) - 1))
		{
			deleteAtEnd(&(*head));
		}
		else
		{
			temp = *head;

			for (i = 0; temp != NULL && i < index; i++)
			{
				temp = temp->next;
			}

			if (temp == NULL)
				return (-1);

			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;

			free(temp);
		}
	}

	/*printf("the new size %ld\n", list_length(*head));*/

	return (1);
}
