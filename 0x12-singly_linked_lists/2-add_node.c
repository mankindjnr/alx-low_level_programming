#include "lists.h"

/**
 *add_node - add a node at the beginning of the list
 *@head: pointer to the first node
 *@str: the string we are to duplicate
 *Return: address of the new ellement
 */
list_t *add_node(list_t **head, const char *str)
{
	/*unsigned int len = 0;*/
	char *tar = strdup(str);
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));

	newnode->str = tar;
	newnode->next = *head;
	/*newnode->len = len;*/
	*head = newnode;

	return (newnode);
}
