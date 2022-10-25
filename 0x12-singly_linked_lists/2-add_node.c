#include "lists.h"
#include <string.h>
/**
 *add_node - add a node at the beginning of the list - create it 1st
 *@head: pointer to the first node
 *@str: the string we are to duplicate and to assign to node
 *the new content for the new node
 *Return: address of the new ellement
 */
list_t *add_node(list_t **head, const char *str)
{
	char *tar = strdup(str);
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = tar;
        newnode->next = *head;
	newnode->len = strlen(str);
	*head = newnode;

	if (*head == NULL)
		return (NULL);
	else
		return (*head);
}
